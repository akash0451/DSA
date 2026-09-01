class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n%2!=0)
        { 
            while(n--)
            ans+='a';
        }
        else
        {   
            while(n--)
            {
                ans+='a';
            }
            ans[ans.size()-1]='k';
        }
        return ans;
    }
};