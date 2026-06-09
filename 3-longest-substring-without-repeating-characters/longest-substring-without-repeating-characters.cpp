class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> m;
        int idx = 0;
        int maxLen = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(m.find(s[i]) != m.end()){
                idx = max(idx , m[s[i]] + 1);
            }
            m[s[i]] = i;
            maxLen = max(maxLen , i - idx + 1);
        }
        return maxLen;
    }
};