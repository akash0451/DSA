class Solution {
public:
    string reverseWords(string s) {
        string word="";
        string ans="";
        s+=' ';
        for(char x: s)
        {
            if(x==' ')
            {
             reverse(word.begin(),word.end());
             ans+=word;
             ans+=' ';
             word="";
            }
            else
            word+=x;
        }
        ans.pop_back();
        return ans;
    }
};