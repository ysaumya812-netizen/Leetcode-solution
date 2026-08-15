class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper=0;
        for(char num:word){
            if(isupper(num)){
                upper++;
            }
        }
        if(upper == word.size()|| upper==0 || (upper==1 && isupper(word[0]))){
            return true;
        }
        return false;
    }
};