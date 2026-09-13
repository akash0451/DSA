class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size(),count1=0,count2=0;
        int i=0,j=n/2;
        while(i<j)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            count1++;
            }
            i++;
        }
         while(j<n)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' ){
            count2++;
            }
            j++;
        }
        return count1==count2;
    }
};