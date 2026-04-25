class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=0, p2=0, k=0;
        vector<int> ans(m+n,0);
        while(p1<m && p2<n){
            if(nums1[p1]<=nums2[p2]){
                ans[k++] = nums1[p1++];
            }
            else{
                ans[k++] = nums2[p2++];
            }
        }
        while(p1<m){
            ans[k++] = nums1[p1++];
        }
        while(p2<n){
            ans[k++] = nums2[p2++];
        }
        nums1 = ans;
    }
};