class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        int len = 0;
        bool lstart = false;
        for(int j = n; j >=0; j--){
            if(s[j] == ' ' && !lstart) continue;
            else if(s[j] == ' ' && lstart) break;
            else{
                lstart = true;
                len++;
            }
        }
        return len;
    }
};