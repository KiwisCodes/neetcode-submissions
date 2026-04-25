class Solution {
public:

    bool findPairs(vector<int>& nums, int possibleMax, int p){
        int cnt = 0;
        int i=0;
        while(i<nums.size()-1){
            if(abs(nums[i]-nums[i+1])<=possibleMax){
                cnt++;
                i+=2;
            }
            else i++; //skip this number
        }
        return cnt>=p;
    }

    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int left = 0, mid=0, right=1000000000;
        //find the min max that is possible
        while(left<right){
            mid = left + (right-left)/2;
            if(findPairs(nums, mid, p)) right = mid;
            else left = mid+1;
        }
        return left;
    }
};