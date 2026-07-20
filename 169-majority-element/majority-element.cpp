class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele;
        int n=nums.size();
        int size=n/2 ;
        
        for(int i=0;i<n;i++){
            if(cnt == 0){
                cnt=1;
                ele=nums[i];
            } else if(nums[i]==ele){
                cnt++;
            }else {
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele){
                cnt1++;
            }
            if(cnt1 > size){
                return ele;
            }
        }
        return -1;
    }
};