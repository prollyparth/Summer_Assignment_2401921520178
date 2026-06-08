class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char , int> m;
        for(char i : s){
            m[i]++;
        }
        for(char j : t){
            m[j]--;
        }
        for(auto x = m.begin() ; x != m.end() ; x++){
            if(x->second != 0){
                return false;
            }
        }
        return true;
    }
};