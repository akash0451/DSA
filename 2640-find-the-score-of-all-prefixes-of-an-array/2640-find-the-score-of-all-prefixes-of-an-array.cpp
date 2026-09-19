class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;

        long long mx = 0;
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            mx = max(mx,(long long)nums[i]);

            sum += nums[i] + mx;
            ans.push_back(sum);
        }

        return ans;
    }
};