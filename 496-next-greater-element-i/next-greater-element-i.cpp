class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int , int> m;
        for(int i = nums2.size() - 1 ; i >= 0 ; i--){
            if(s.empty()){
                s.push(nums2[i]);
                m[nums2[i]] = -1;
            }
            else if(nums2[i] < s.top()){
                m[nums2[i]] = s.top();
                s.push(nums2[i]);
            }
            else{
                while(!s.empty() && nums2[i] >= s.top()){
                    s.pop();
                }
                if(s.empty()){
                    m[nums2[i]] = -1;
                }
                else{
                    m[nums2[i]] = s.top();
                }
                s.push(nums2[i]);
            }
        }
        vector<int> ans;
        for(int i : nums1){
            ans.push_back(m[i]);
        }
        return ans;
    }
};