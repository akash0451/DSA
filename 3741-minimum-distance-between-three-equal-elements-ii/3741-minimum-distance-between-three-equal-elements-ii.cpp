class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);

            int n = mp[nums[i]].size();

            if (n >= 3) {
                int d = 2 * (mp[nums[i]][n-1] - mp[nums[i]][n-3]);
                ans = min(ans, d);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};