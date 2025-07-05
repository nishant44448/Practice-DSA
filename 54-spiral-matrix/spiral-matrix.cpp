class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m= matrix.size();
    int n= matrix[0].size();
    int minrow =0, mincol = 0;
    int maxrow = m-1, maxcol = n-1;
    vector <int> v;
    while(minrow <= maxrow && mincol <= maxcol) {
        // print first row
        for(int j = mincol; j <= maxcol; j++) {
            v.push_back( matrix[minrow][j]);
        }
        minrow++;
        
        // print last column
        for(int i = minrow; i <= maxrow; i++) {
            v.push_back( matrix[i][maxcol]);
        }
        maxcol--;
        
        // print last row if still in bounds
        if(minrow <= maxrow) {
            for(int j = maxcol; j >= mincol; j--) {
                v.push_back( matrix[maxrow][j]);
            }
            maxrow--;
        }
        
        // print first column if still in bounds
        if(mincol <= maxcol) {
            for(int i = maxrow; i >= minrow; i--) {
                v.push_back( matrix[i][mincol]);
            }
            mincol++;
        }
    }
    
    return v;
        
    }
};