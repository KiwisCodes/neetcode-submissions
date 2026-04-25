class Solution {
public:
    int stringToInt(string stringNum){
        int cur = 0;
        for(int i=0;i<stringNum.size();i++){
            cur*=10;
            cur+= int(stringNum[i] - 48);
        }
        return cur;
    }

    bool validWordAbbreviation(string word, string abbr) {
        int wordIndex = 0, abbrIndex = 0;
        while(wordIndex<word.size() && abbrIndex<abbr.size()){
            char tempChar = abbr[abbrIndex];
            if(tempChar == '0') return false;
            if(tempChar == word[wordIndex]) {
                wordIndex++;
                abbrIndex++;
                continue;
            }
            else
            {
                if('0'>tempChar || tempChar>'9') return false;
                else{
                    string stringNum = "";
                    while(abbrIndex<abbr.size() && '0'<=abbr[abbrIndex] && abbr[abbrIndex]<='9'){
                        tempChar = abbr[abbrIndex];
                        stringNum += tempChar;
                        abbrIndex++;
                    }
                    int intNum = stringToInt(stringNum);
                    cout<<intNum<<"\n";
                    wordIndex+=intNum;
                }
            }

        }
        return true;
    }
};