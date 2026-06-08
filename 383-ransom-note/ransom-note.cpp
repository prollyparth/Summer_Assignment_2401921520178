class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> m;
        for(char i : magazine){
            m[i]++;
        }
        for(char j : ransomNote){
            m[j]--;
            if(m[j] < 0){
                return false;
            }
        }
        return true;
    }
};