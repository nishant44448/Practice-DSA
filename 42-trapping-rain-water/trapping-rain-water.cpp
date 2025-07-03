class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        // prev greatest element
        int prev[n];
        prev[0]= -1;
        int max = height[0];
        for (int i=1;i<n;i++){
            prev[i]=max;
            if(max<height[i]) max=height[i];
        }
        // next greatest element
        int next[n];
        prev[n-1]= -1;
        int maxi = height[n-1];
        for(int i=n-2;i>=0;i--){
            next[i]=maxi;
            if(maxi<height[i]) maxi=height[i];
        }
        // minimum of prev and next
        // int mini[n];
        // for (int i=1;i<n-1;i++){
        //     mini[i]=min(prev[i],next[i]);
        for(int i=1;i<n;i++){
            prev[i]= min(prev[i],next[i]);
        }

        
        // calculating water using minimum array formed and the heights given
        int water =0;
        for(int i=1;i<n-1;i++){
            if(height[i]<prev[i]){
                water +=(prev[i]-height[i]);
            }
        }  
    return water;
    }
};