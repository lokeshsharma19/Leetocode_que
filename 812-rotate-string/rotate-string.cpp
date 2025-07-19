class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!= goal.size()) return false;
        string newS = s + s;
        return newS.find(goal) != string::npos;

    }
};