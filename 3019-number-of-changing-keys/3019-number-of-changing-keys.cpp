class Solution {
public:
    int countKeyChanges(string s) {
        for(char &c: s){
            c=tolower(c);
        }
        int count=0;
        int i=0,j=1;
        while(i< s.size() && j< s.size())
        {
            if(s[i]!=s[j])
            {
            count++;
            }
            i++;
            j++;
        }
        return count;
    }
};