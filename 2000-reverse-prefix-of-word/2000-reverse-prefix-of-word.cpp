class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0,k=0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
            k=i;
            break;
            }
            
        }
        while(i<k){
            swap(word[i],word[k]);
            i++;
            k--;
        }
        return word;
    }
};