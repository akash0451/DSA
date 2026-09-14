class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int ans=0;
        for(char c: s)
        {
            if(c=='|')
            count++;
            
            if(count%2==0)
            {
              if(c=='*')
              ans++;
            }
        }
        return ans;
    }
};