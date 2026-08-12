class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int rev=0;
            while(nums[i]>0){
                int r=nums[i]%10;
                rev=rev*10+r;
                nums[i]=nums[i]/10;
            }
            s.insert(rev);
        }
        return s.size();
    }
};