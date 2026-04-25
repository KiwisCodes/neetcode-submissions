class Solution {
public:
    int myFunction(vector<int> &nums, int l, int r){
        if (l==r) return nums[l];

        int mid = (l+r)/2;
        int leftHalf = myFunction(nums, l, mid);
        int rightHalf = myFunction(nums, mid+1, r);
        return min(leftHalf, rightHalf);
    }

    int findMin(vector<int> &nums) {
        return myFunction(nums, 0, nums.size()-1);
    }
};
