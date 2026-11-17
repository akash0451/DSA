class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1)
        return true;
        int st=0,en=1;
        while(en<nums.size()){
            if((nums[st]%2)==(nums[en]%2))
            return false;
            st++; en++;
            
           
        }
        return true;
    }
};