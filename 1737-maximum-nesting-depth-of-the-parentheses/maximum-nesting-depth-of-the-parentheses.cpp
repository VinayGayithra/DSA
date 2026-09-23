// class Solution {
// public:
//     int maxDepth(string s) {
//         int open=0;
//         int res=0;
//         for(char ch:s){
//             if(ch=='('){
//                 open=open+1;
//                 if(open>res)
//                     res=open;
//             }else if(ch==')'){
//                 open=open-1;
//             }
//         }
//         return res;
//     }
// };
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int res=0;
        for(char ch:s){
            if(ch=='('){
                st.push(ch);
            }else if(ch==')'){
                st.pop();
            }
            res=max(res,(int)st.size());
        }
        return res;
    }
};