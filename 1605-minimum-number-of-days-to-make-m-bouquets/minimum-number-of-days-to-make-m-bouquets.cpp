class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();

        // Not enough flowers total
        if (n <(long long) m *(long long) k) return -1;

        int min = INT_MAX;
        int max = INT_MIN;

        // Manually find min and max bloomDay
        for (int day : bloomDay) {
            if (day < min) min = day;
            if (day > max) max = day;
        }

        while (min < max) {
            int mid = min + (max - min) / 2;
            int count = 0;
            int ans = 0;

            for (int i = 0; i < n; i++) {
                if (bloomDay[i] <= mid) {
                    count++;
                    if (count == k) {
                        ans++;
                        count = 0;
                    }
                } else {
                    count = 0;
                }
            }

            if (ans < m) {
                min = mid + 1;
            } else {
                max = mid;
            }
        }

        return min;
    }
};
