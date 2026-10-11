class Solution {
public:
    string largestOddNumber(string num) {
       int n=num.size();
       int i=0,j=n-1;
       string ans="";
       while(i<=j)
       {
        if((num[j]-'0')%2!=0)
        {
          ans+=num[i];
          i++;
        }
        else if((num[j]-'0')%2==0)
        j--;
       }
       return ans;
    }
};