class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }
        unordered_map<char , int> m1 , m2;
        for(char c : s1){
            m1[c]++;
        }
        int k = s1.size();
        for(int i = 0 ; i <= s2.size() - k ; i++){
            for(int j = i ; j < k + i ; j++){
                m2[s2[j]]++;
            }
            if(m1 == m2){
                return true;
            }
            else{
                for(int j = i ; j < k + i ; j++){
                    m2[s2[j]]--;
                    if(m2[s2[j]] == 0){
                        m2.erase(s2[j]);
                    }
                }
            }
        }
        return false;
    }
};