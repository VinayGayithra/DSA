// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s.size()!=t.size()) return false;
//         if(s == t){
//             return true;
//         }
//         return false;  
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char,int> mp;
        for(char ch : s)
            mp[ch]++;
        for(char ch : t)
            mp[ch]--;
        for(auto it : mp) {
            if(it.second != 0)
                return false;
        }
        return true;
    }
};