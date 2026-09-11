class Solution {
public:
    bool isBalanced(string s) {
        
        int n=s.size();
        int s1=0,s2=0;
       for(int i=0;i<n;i++)
       {
        if(i%2==0)
        s1+=s[i]-'0';
        else
        s2+=s[i]-'0';
       }
        if(s1==s2)
        return 1;
        else
        return 0;
    }
};