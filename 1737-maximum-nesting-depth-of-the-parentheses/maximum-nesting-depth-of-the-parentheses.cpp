class Solution {
public:
    int maxDepth(string s) {
        int open=0;
        int res=0;
        for(char ch:s){
            if(ch=='('){
                open=open+1;
                if(open>res)
                    res=open;
            }else if(ch==')'){
                open=open-1;
            }
        }
        return res;
    }
};