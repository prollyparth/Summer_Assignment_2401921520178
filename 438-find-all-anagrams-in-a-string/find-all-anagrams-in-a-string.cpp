class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.size() > s.size()){
            return ans;
        }
        unordered_map<char, int> m1, m2;
        for (char c : p){
            m1[c]++;
        }
        int k = p.size();
        for (int i = 0; i < k; i++) {
            m2[s[i]]++;
        }
        if (m1 == m2){
            ans.push_back(0);
        }

        for (int i = k; i < s.size(); i++) {
            m2[s[i]]++;              
            m2[s[i - k]]--;          

            if(m2[s[i - k]] == 0) { 
                m2.erase(s[i - k]);
            }
            if (m1 == m2)
                ans.push_back(i - k + 1);
        }
        return ans;
    }
};