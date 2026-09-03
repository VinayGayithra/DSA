class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n != m) return false;
    
        for(int i=0;i<n;i++){
            rotate(begin(s),begin(s)+1,end(s));
            if(s == goal)
                return true;
        }
        return false;
        
    }
};