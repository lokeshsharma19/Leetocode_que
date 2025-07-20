class Solution {
public:
  string getHappyPrefix(string& str){
        int len = 0;
        int n = str.size();
        vector<int> lps(n,0);
        for(int i=1;i<n;){
            if(str[len] == str[i]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len > 0){
                    len = lps[len-1];
                }else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return str.substr(0,lps[n-1]);
    }
    string longestPrefix(string s) {
        return getHappyPrefix(s);
    }
};