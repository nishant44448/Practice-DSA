class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        // void reverse(vector <int> nums, int i , int j){
        //     while(i<j){
        //         int temp=nums[i];
        //         nums[i]=nums[j];
        //         nums[j]=temp;
        //         i++;
        //         j--;
        //     }
        //     return;
        // }

        // finding pivot index
        int idx= -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
              idx = i;
              break;
            }
        }
        if(idx== -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        // reverse ke methods hai built in function and reverse part of an array
        // built in (i,j) reverse(nums.begin()+1,nums.end()+j+1);
        reverse(nums.begin()+idx+1,nums.end());
        // finding just greater number than idx
        int j= -1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        // swapping idx and j;
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;
    }
};