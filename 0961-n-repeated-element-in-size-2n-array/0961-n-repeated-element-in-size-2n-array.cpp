class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto x:freq){
            int n=nums.size()/2;
            if(x.second%n==0)
            return x.first;
        }
        return 0;
    }
};