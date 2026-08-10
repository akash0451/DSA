class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        vector<int>ak;
        ak.push_back(abs(nums[0]-nums[n-1]));
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int k=abs(nums[j]-nums[j-1]);
                ak.push_back(k);

            }
        }
        int ans=*max_element(ak.begin(),ak.end());
         return ans;
    }
};