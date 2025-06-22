class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for (int w : weights) {
            low = max(low, w);  
            high += w;          
        }

        while (low < high) {
            int mid = low + (high - low) / 2;
            int currentLoad = 0;
            int requiredDays = 1;

            for (int w : weights) {
                if (currentLoad + w <= mid) {
                    currentLoad += w;  
                } else {
                    requiredDays++;    
                    currentLoad = w;   
                }
            }

            if (requiredDays > days) {
                
                low = mid + 1;
            } else {
                
                high = mid;
            }
        }

        return low;
    }
};
