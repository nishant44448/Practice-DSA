class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                if (mid == 0 || nums[mid - 1] < target) {
                    first = mid;
                    break;
                } else {
                    high = mid - 1;
                }
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                if (mid == nums.size() - 1 || nums[mid + 1] > target) {
                    last = mid;
                    break;
                } else {
                    low = mid + 1;
                }
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};
