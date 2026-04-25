class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j = 0;
        for(int i=0;i<abbr.size();i++){
            cout<<i<<" "<<j<<"\n";
            if(abbr[i] == '0') return false;
            else if(abbr[i]>='1' && abbr[i]<='9'){
                int temp_ptr = i;
                int temp_add = 0;
                while(abbr[temp_ptr]>='1' && abbr[temp_ptr]<='9'){
                    temp_add *= 10;
                    temp_add += abbr[temp_ptr] - '0';
                    // cout<<temp_add<<"\n";
                    temp_ptr++;
                }
                j += temp_add;
                // cout<<j<<"\n";
                continue;
            }
            else if(abbr[i] >= 'a' && abbr[i]<='z'){
                if(abbr[i] != word[j]) {
                    // cout<<i<<" "<<j<<" here\n";
                    return false;
                }
                if(j == word.size()-1 && abbr[i] == word[j]) return true;
            }
            j++;
        }
        return true;
    }
};