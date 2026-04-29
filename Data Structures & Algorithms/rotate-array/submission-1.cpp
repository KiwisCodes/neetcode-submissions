class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(), nums.end());
        if(k%n==0) return;
        int i = 0, j = (k%n)-1;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        i = (k%8);
        j = n-1;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};