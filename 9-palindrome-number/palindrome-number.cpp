class Solution {
public:
    bool isPalindrome(int x) {
        string newx = to_string(x);
        int j = newx.size()-1;
        int i = 0;
        while(i<=j){
            if(newx[i] != newx[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};