class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> m;
        for(string s : strs){
            string k = s;
            sort(k.begin() , k.end());
            m[k].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto i : m){
           ans.push_back(i.second);
        }
        return ans;
    }
};