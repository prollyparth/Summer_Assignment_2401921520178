class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        vector<int> ans(nums.size());
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            int left = nums[low] * nums[low];
            int right = nums[high] * nums[high];
            if(left > right){
                ans[i] = left;
                low++;
            }
            else{
                ans[i] = right;
                high--;
            }
        }
        return ans;
    }
};