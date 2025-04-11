class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int tar=0;
        vector <int> ans;
        for(int i=0;i<n;i++){
            tar=target-nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==tar){
                   ans.push_back(j);
                   ans.push_back(i);
                }
            }
            
        }
        return ans;
        
    }
};