class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapp; // number -> index
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];

            
            if (mapp.find(complement) != mapp.end()) {
                
                return {mapp[complement], i};
            }

            mapp[nums[i]] = i;
        }

        return {}; 
    }
};
