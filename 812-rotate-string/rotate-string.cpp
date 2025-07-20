class Solution {
public:
    vector<int> buildLPS(string& pattern){
        int len = 0;
        int n = pattern.size();
        vector<int> lps(n,0);
        for(int i=1;i<n;){
            if(pattern[len] == pattern[i]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len > 0){
                    len = lps[len-1];
                }else{
                    lps[i] = len;
                    i++;
                }
            }
        }
        return lps;
    }

    bool rotateString(string s, string goal) {
        int m = s.size();
        if(m!= goal.size()) return false;
        vector<int> lps = buildLPS(goal);
        int j = 0;
        for(int i =0; i<2*m;){
            int index = i%m;
            if(goal[j] == s[index]){
                j++;
                i++;
            }
            else {
                if(j>0){
                    j = lps[j-1];
                }else i++;
            }
            if(j==goal.size()) return true;
        }
        return false;
    }
};