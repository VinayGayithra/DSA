class Solution {
public:
    bool poss(vector<int>& bloomDay,int day,int m,int k){
        int n=bloomDay.size();
        int cnt=0,nb=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                cnt++;
            }else{
                nb+=cnt/k;
                cnt=0;
            }
        }
        nb+=cnt/k;
        return nb>=m;
    }

    int minDays(vector<int>& bloomDay,int m,int k){
        int n=bloomDay.size();
        if((long long)m*k>n) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(poss(bloomDay,mid,m,k))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};