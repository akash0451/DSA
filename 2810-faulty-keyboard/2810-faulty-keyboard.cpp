class Solution {
public:
    string finalString(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i')
            {
              
              reverse(temp.begin(),temp.end());
              continue;
            }
            temp+=s[i];
        }
        return temp;
    }
};