class Solution {
public:
    pair<int, int> givePalin(string& s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return {i, j};
            }
            i++;
            j--;
        }
        return {-1, -1};
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        pair<int, int> firstAns = givePalin(s, i, j);
        if(firstAns.first != -1){
            i = firstAns.first;
            j = firstAns.second;
            pair<int, int> secAns = givePalin(s, i+1, j);
            pair<int, int> thirdAns = givePalin(s, i, j-1);
            if(secAns.first != -1 && thirdAns.first != -1) return false;
        }
        return true;
    }
};