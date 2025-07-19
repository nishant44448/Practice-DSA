class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
//Because in a valid mountain array:  ; why low =1 and high =arr[size]-2
// The peak is not at the first or last index.
// This ensures arr[mid - 1] and arr[mid + 1] are always safe to access.
        int low = 1;
        int high = arr.size()-2;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                 ans = mid;
                 break;
            }
            else if(arr[mid]>arr[mid-1]) low = mid+1;
            else high = mid-1;
            
        }
        return ans;
    }
};