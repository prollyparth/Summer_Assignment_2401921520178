class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        string w = t.substr(1 , t.size() - 2);
        return w.find(s) != string::npos;
    }
};