class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j = 0;
        for(int i=0;i<abbr.size();i++){
            if(abbr[i] == '0') return false;
            else if(abbr[i]>='1' && abbr[i]<='9'){
                j += abbr[i] - '0';
                continue;
            }
            else if(abbr[i] >= 'a' && abbr[i]<='z'){
                if(abbr[i] != word[j]) return false;
            }
            j++;
        }
        return true;
    }
};