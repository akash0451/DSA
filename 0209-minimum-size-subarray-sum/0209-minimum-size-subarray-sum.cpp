class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int sum=0;
        int ans=INT_MAX;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            
            
            while(sum>=target)
            {
                sum-=nums[left];
                ans=min(ans,right-left+1);
                
                left++;
            }
        }
        if(ans==INT_MAX)
        return 0;
        return ans;
    }
};