class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        int ind=0;
        vector<int> arr(n+m);
        while(left < m && right < n){
            if(nums1[left] <= nums2[right]){
                arr[ind]=nums1[left];
                left++;
                ind++;
            }else{
                arr[ind]=nums2[right];
                right++;
                ind++;
            }
        }
        while(left < m){
            arr[ind++]=nums1[left++];
        }
        while(right < n){
            arr[ind++]=nums2[right++];        
        }
        for(int i=0;i<n+m;i++){
            nums1[i]=arr[i];

        }
    }
};