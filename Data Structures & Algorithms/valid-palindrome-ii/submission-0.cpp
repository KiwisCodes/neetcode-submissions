class Solution {
public:
    bool validPalindrome(string s) {
        int n = 1;
        int p1 = 0, p2 = s.size()-1;
        while(p1<p2)
        {
            if(n<0) return false;
            if(s[p1] == s[p2]){
                p1++;
                p2--;
            }
            else if(s[p1] != s[p2]){
                if(n==0) return false;
                else if((s[p1+1] != s[p2]) && (s[p1] != s[p2-1])){
                    return false;
                }
                else if(s[p1+1] == s[p2]){
                    p1++;
                    n--;
                }
                else if(s[p1] == s[p2-1]){
                    p2--;
                    n--;
                }
            }
        }
        return true;
    }
};