class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        // Step 1: Find the rotation point (count of disorder from the end)
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] < nums[i - 1]) {
                k = n - i;
                break;
            }
        }
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};
