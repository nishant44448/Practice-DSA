class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        while(n>0){
            n=n&(n-1); //best approach with minimum iterations
            c++;
        }
        return c;
        // int c=0;
        // while(n>0){
        //     if((n&1)>0){
        //         c++;
        //     }
        //     n=n>>1;
        // }
        // return c;
    }
};