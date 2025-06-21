class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int min=1;
       int max=1000000;
       int mid;
       int sum=0;
       int n=nums.size();
       while(min<max){
        mid=min+(max-min)/2;
        sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil(nums[i]/(double)mid);
            
        }
        if(sum>threshold){
            min=mid+1;
        }
        else{
            max=mid;
        }

       }
       return min;
    }
};