class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater <int>());
        int k=nums[0]*nums[1]*nums[2];
        int m=nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        return max(k,m);
    }
};