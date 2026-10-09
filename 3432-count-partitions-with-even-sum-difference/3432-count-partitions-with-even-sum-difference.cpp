class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n,0);
        vector<int>s(n,0);
        p[0]=nums[0],s[n-1]=nums[n-1];
        for(int i=1;i<n-1;i++)
        {
            p[i]=p[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            s[i]=s[i+1]+nums[i];
        }
        int count=0;
        int i=0,j=1;
        while(i<p.size()-1 && j<s.size())
        {
            if((p[i]-s[j])%2==0)
            {
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};