class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p1=nums.size()-1, p2=0;
        while(p1>0 && nums[p1]>=0) p1--;
        p2 = p1+1;
        vector<int> ans(nums.size(), 0);
        int k=0;
        while(p1>=0 && p2<nums.size()){
            if(nums[p1]*nums[p1]<=nums[p2]*nums[p2]){
                ans[k++] = nums[p1]*nums[p1--];
            }
            else ans[k++] =  nums[p2]*nums[p2++];
        }
        while(p1>=0){
            ans[k++] = nums[p1]*nums[p1--];
        }
        while(p2<nums.size()){
            ans[k++] = nums[p2]*nums[p2++];
        }
        return ans;
    }
};