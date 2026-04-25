class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ptrg=0, ptrs=0;
        int cnt=0;
        while(ptrg<g.size()&&ptrs<s.size()){
            if(g[ptrg]<=s[ptrs]){
                cnt++;
                ptrg++;
                ptrs++;
            }
            else ptrs++;
        }
        return cnt;
    }
};