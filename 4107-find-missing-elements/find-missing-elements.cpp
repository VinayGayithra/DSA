class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = nums[0], maxi = nums[0];
        unordered_set<int> st;
        for (auto it : nums) {
            mini = min(mini, it);
            maxi = max(maxi, it);
            st.insert(it);
        }
        vector<int> ans;
        for (int i = mini + 1; i < maxi; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};