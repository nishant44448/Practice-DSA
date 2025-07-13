class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        // while(i<j){ reverse function hai ye 
        //     int temp = arr[i];
        //     arr[i]= arr[j];
        //     arr[j]= temp;
        //     i++;
        //     j--;
        // }
        
        reverse(nums.begin() , nums.end() - k);
        reverse(nums.end() - k , nums.end());
        reverse(nums.begin() , nums.end());
    }
};