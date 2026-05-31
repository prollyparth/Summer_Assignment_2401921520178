class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> s;
        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];

            if (s.find(comp) != s.end()) {
                return {s[comp], i};
            }

            s[nums[i]] = i;
        }
        return {};
    }
};