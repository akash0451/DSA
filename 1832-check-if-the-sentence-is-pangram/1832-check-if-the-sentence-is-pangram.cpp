class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);
        for(char c: sentence){
            alpha[c-'a']=1;
        }
        for(auto x: alpha){
            if(x==0)
            return 0;
            
        }
        return 1;
    }
};