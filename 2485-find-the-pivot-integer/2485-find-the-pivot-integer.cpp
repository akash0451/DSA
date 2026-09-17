class Solution {
public:
    int pivotInteger(int n) {
        // vector<int>p(n+1,0);
        // vector<int>s(n+1,0);
        // int i=1,j=n;
        // int sum=0,sum2=0;
        // while(i<=n)
        // {
        //     sum+=i;
        //     p[i]=sum;
        //     i++;
        // }
        // while(j>0)
        // {
        //    sum2+=j;
        //    s[j]=sum2;
        //    j--;
        // }
        // for(int i=1;i<p.size();i++)
        // {
        //     if(p[i]==s[i])
        //     return i;
        // }
         int prefixSum = 1;
        int suffixSum = n;

        int i = 1;
        int j = n;

        while (i < j) {
            if (prefixSum < suffixSum) {
                i++;
                prefixSum += i;
            } else {
                j--;
                suffixSum += j;
            }
        }

        return prefixSum == suffixSum ? i : -1;

    return -1;
    }
};