class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
       int i=0,j=1;
       int n=s.size();
       while(i<n && j<n)
       {
          int a=s[i]-'0';
          int b=s[j]-'0';
          if(abs(a - b)>2){
          return 0;
          }
          i++,j++;
       }
       return 1;
    }
};