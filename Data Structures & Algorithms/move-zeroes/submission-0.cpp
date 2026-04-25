class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=nums.size(), p2=nums.size();
        while(p1>=0){
            if(nums[p1]!=0){
                p1--;
                continue;
            }
            if(nums[p1]==0){
                p2 = p1;
                while(p2<nums.size()-1){
                    if(nums[p2+1]!=0){
                        swap(nums[p2], nums[p2+1]);
                    }
                    p2++;
                }
            }
            p1--;
        }
    }
};