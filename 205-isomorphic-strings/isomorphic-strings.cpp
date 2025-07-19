class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,char> mppS;
        unordered_map<char,char> mppT;
        for(int i=0; i<s.size(); i++){
            if((mppS.find(s[i])!= mppS.end() && mppS[s[i]] != t[i]) || (mppT.find(t[i])!=mppT.end() && mppT[t[i]] != s[i])) return false;
            mppS[s[i]] = t[i];
            mppT[t[i]] = s[i];
        }
        return true;
    }
};