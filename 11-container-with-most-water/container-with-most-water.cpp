class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0 , max = 0;
        int high = height.size() - 1;
        while(low < high){
            int vol = (high - low) * min(height[low] , height[high]);
            if(vol > max){
                max = vol;
            }
            else{
                if(height[low] < height[high]){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return max;
    }
};