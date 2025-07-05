class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    int minrow =0, mincol = 0;
    int maxrow = n-1, maxcol = n-1;
    int val = 1 ;
    vector<vector<int>>v(n,vector<int>(n));
    while(minrow <= maxrow && mincol <= maxcol) {
        // print first row
        for(int j = mincol; j <= maxcol; j++) {
            v[minrow][j] = val++;
        }
        minrow++;
        
        // print last column
        for(int i = minrow; i <= maxrow; i++) {
            v[i][maxcol] = val++;
        }
        maxcol--;
        
        // print last row if still in bounds
        if(minrow <= maxrow) {
            for(int j = maxcol; j >= mincol; j--) {
                v[maxrow][j] = val++;
            }
            maxrow--;
        }
        
        // print first column if still in bounds
        if(mincol <= maxcol) {
            for(int i = maxrow; i >= minrow; i--) {
                v[i][mincol] = val++;
            }
            mincol++;
        }
    }
    return v;
    }
};