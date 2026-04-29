class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = -1;
        int n = heights.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int cur = min(heights[i], heights[j]);
            ans = max(ans, cur*(j-i));
            if(heights[i]>heights[j]) j--;
            else if(heights[i]<=heights[j]) i++;
        }
        return ans;
    }
};
