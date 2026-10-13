class Solution {
public:
    int balancedStringSplit(string s) {
        int balance=0,ans=0;
        for(auto x: s)
        {
            if(x=='L')
            balance++;
            else
            balance--;

            if(balance==0)
            ans++;
        }
        return ans;
    }
};