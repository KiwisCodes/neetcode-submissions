class Solution {
public:

    int findMin(vector<int> &nums) {
        int left=0, right=nums.size()-1, mid=left + (right-left)/2;
        int ans = nums[mid];
        while(left<right){
            mid = left + (right-left)/2;
            if(nums[left]<=nums[mid]) {
                ans = min(ans, nums[left]);
                left = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                right = mid-1;
            }
            //4 5 1 2 3
        }
        return ans;
    }
};
