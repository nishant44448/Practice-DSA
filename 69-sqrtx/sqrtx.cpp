class Solution {
public:
    int mySqrt(int x) {
    int low = 0, high = x;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        long long m = (long long)mid;
        if(m*m == x) {
            return mid;
        } else if(m*m < x) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return high;
    }
};