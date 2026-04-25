class Solution {
public:

    int findMin(vector<int> &nums) {
        int left=0, mid=0, right=nums.size()-1;
        int ans = nums[0];
        while(left<right){
            mid = left + (right-left)/2;
            if(nums[left]<=nums[mid]) {
                ans = min(ans, nums[left]);
                left = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                right = mid;
            }
            //4 5 1 2 3
        }
        return ans;
    }
};
