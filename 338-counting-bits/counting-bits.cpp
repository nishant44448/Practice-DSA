class Solution {
public:
    int countsetbits(int num){
        int c = 0;
        while(num>0){
            num=num&(num-1); //best approach with minimum iterations
            c++;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            ans.push_back(countsetbits(i));
        }
        return ans;
    }
};