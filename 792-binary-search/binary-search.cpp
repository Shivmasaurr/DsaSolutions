class Solution {
public: 
    int bs(vector <int> &nums,int low,int target,int more){
        if(low>more){
            return -1;
        }
        int n=nums.size();
        int mid=ceil((low+more)/2);
        
    if (nums[mid] == target) return mid;
    else if (nums[mid] < target) return bs(nums, mid + 1, target, more);
    else return bs(nums, low, target, mid - 1);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return bs(nums,0,target,n-1);
    }
};