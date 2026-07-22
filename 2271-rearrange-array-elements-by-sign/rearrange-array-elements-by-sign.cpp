class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int postInd=0,negInd=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negInd]=nums[i];
                negInd+=2;
            }else{
                ans[postInd]=nums[i];
                postInd+=2;
            }
        }
        return ans;
    }
};