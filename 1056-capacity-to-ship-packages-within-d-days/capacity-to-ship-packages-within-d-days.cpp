class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int day = 1, sum = 0;

            for (int w : weights) {
                if (sum + w > mid) {
                    day++;
                    sum = w;
                } else {
                    sum += w;
                }
            }

            if (day <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};