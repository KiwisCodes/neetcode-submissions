class Solution {
public:

    int findMin(vector<int> &nums) {
        int left=0, right=nums.size()-1, mid=0;
        int ans = nums[0];
        while(left<=right){
            if(nums[left]<nums[right]) {
                ans = min(ans, nums[left]);
                break;
            }
            mid = left + (right-left)/2;
            ans = min(nums[mid], ans);
            if(nums[left]<=nums[mid]) {
                left = mid+1;
            }
            else{
                right = mid-1;
            }
            //4 5 1 2 3
        }
        return ans;
    }
};
