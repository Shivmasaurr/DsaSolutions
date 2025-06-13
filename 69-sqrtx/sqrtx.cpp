class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int low = 0;
        int high = x;
        int mid, ans;

        while (low <= high) {
            mid = low + (high - low) / 2;

            if ((long long)mid * mid == x) {
                return mid;
            } else if ((long long)mid * mid < x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return high;
    }
};
