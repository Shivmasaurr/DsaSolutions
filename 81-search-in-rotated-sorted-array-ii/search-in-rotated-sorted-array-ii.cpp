class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int more=n-1;
        int mid;
        if(nums[low]==target||nums[more]==target){
            return true;
        }
        while(low<=more){
            mid=low+(more-low)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[low]==nums[mid]&&nums[mid]==nums[more]){
                low++;
                more--;
            }
            else if(nums[mid]<=nums[more]){

                if(nums[mid]<=target&&target<=nums[more]){
                    low=mid+1;
                }
                else{
                    more=mid-1;
                }
            }
            else{
                if(nums[low]<=target&&target<=nums[mid]){
                    more=mid-1;
                }
                else{
                    low=mid+1;
                }
            }


        
        }
        return false;
    }
};