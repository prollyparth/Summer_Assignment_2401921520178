class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> m;
        for(char i : s){
            m[i]++;
        }
        for(int j = 0 ; j < s.length() ; j++){
            if(m[s[j]] == 1){
                return j;
            }
        }
        return -1;
    }
};