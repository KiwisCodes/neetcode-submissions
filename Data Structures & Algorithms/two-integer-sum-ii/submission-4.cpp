class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size()-1;
        int left = 0;
        int curSum = 0;
        vector<int> ans(2,0);
        while(left<right){
            curSum = numbers[left]+numbers[right];
            if(curSum==target){
                ans[0] = left+1;
                ans[1] = right+1;
                return ans;
            }
            else if(curSum>target){
                right--;
            }
            else if(curSum<target)
            {
                left++;
            }
        }
        return ans;
    }
};
