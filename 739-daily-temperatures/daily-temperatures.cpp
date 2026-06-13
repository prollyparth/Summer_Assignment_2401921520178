class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int , int>> s;
        vector<int> ans(temp.size());
        for(int i = temp.size() - 1 ; i >= 0 ; i--){
            if(s.empty()){
                s.push({temp[i] , i});
                ans[i] = 0;
            }
            else if(temp[i] >= s.top().first){
                while(!s.empty() && temp[i] >= s.top().first){
                    s.pop();
                }
                if(s.empty()){
                    ans[i] = 0;
                }
                else{
                    ans[i] = s.top().second - i;
                }
            }
            else{
                ans[i] = s.top().second - i;
            }
            s.push({temp[i] , i});
        }
        return ans;
    }
};