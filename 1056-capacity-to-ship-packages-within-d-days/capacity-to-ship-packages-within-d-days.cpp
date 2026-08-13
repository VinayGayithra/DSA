class Solution {
public:
    bool possible(vector<int>& weights, int days, int cap, int i, int day, int sum) {
        if (i == weights.size())
            return day <= days;

        if (sum + weights[i] <= cap)
            return possible(weights, days, cap, i + 1, day, sum + weights[i]);

        if (day == days)
            return false;

        return possible(weights, days, cap, i + 1, day + 1, weights[i]);
    }

    int bs(vector<int>& weights, int days, int low, int high) {
        if (low > high)
            return low;

        int mid = low + (high - low) / 2;

        if (possible(weights, days, mid, 0, 1, 0))
            return bs(weights, days, low, mid - 1);

        return bs(weights, days, mid + 1, high);
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        return bs(weights, days, low, high);
    }
};