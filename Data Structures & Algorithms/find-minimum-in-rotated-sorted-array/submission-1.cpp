class Solution {
public:

    int findMin(vector<int> &nums) {
        int left=0, mid=0, right=nums.size()-1;
        while(left<right){
            mid = left + (right-left)/2;
            if(nums[left]<=nums[mid]) left = mid+1;
            else right = mid;
            //4 5 1 2 3
        }
        return nums[left];
    }
};
