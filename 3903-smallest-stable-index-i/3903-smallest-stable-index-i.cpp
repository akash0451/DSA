class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int mx=*max_element(nums.begin(),nums.begin()+i);
            int mn=*min_element(nums.begin()+i,nums.end());
            int diff=mx-mn;
            if(diff<=k){
                return i;
                break;
            }
            i++;
        }
        return -1;
    }
};