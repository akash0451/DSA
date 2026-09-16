class Solution {
public:
    int Kmp_match(string haystack, string needle) {
        int h=haystack.size(),n=needle.size();
        for(int i=0; i<=h-n ; i++)
        {
            int first=i, second=0;
            while(second < n)
            {
                if(haystack[first]!=needle[second])
                break;
                first++,second++;
            }
            if(second==n)
            return 1;
        }
        return 0;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b)
        return 1;

        int repeat=1;
        string temp=a;
        while(temp.size()< b.size())
        {
            temp+=a;
            repeat++;
        }
        if(Kmp_match(temp,b)==1)
        return repeat;

        if(Kmp_match(temp+a,b))
        return repeat+1;

        return -1;

        
    }
};