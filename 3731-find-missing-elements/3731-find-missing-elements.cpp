class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>ans;
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=mn;i<mx;i++){
            if(freq[i]==0)
            ans.push_back(i);
        }
         return ans;

    }
};