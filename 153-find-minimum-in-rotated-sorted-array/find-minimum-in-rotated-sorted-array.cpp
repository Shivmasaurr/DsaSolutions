class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = 0;
        int max = nums.size() - 1;
        int mid;

        while (min < max) {
            mid = min + (max - min) / 2;

            if (nums[mid] > nums[max]) {
                min = mid + 1;
            } else {
                max = mid;
            }
        }

        return nums[min];
    }
};
