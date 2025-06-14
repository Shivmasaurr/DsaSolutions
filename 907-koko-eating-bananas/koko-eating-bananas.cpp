class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int more = *max_element(piles.begin(), piles.end());
;
        int mid;
        long long sum;
        int n=piles.size();
        int ans=more;
        while(low<=more){
            mid=low+(more-low)/2;
            sum=0;
            for(int i=0;i<n;i++){
                sum += (piles[i] + mid - 1) / mid;


            }
            if(sum>h){
                low=mid+1;
            }
            else{
                ans=mid;
            
                more=mid-1;

            }


        }
        return ans;
    }
};