class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,more=n-1;
       
        while(low<=more){
             int mid=ceil((low+more)/2);
             if(nums[mid]==target){
                return mid;
             }
             else if(nums[mid]<target){
                low=mid+1;
             }
             else{
                more=mid-1;
             }

        }
        return -1;
    }
};