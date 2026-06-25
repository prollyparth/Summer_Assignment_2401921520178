class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int maxAr = 0;
        heights.push_back(0);
        for(int i = 0 ; i < heights.size() ; i++){
            while(!s.empty() && heights[s.top()] > heights[i]){
                int h = heights[s.top()];
                s.pop();
                int w;
                if(s.empty()){
                    w = i;
                }
                else{
                    w = i - s.top() - 1;
                }
                maxAr = max(maxAr , h * w);
            }
            s.push(i);
        }
        return maxAr;
    }
};