class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int count=0;
            int maxi=INT_MIN;
            while(x>0){
                int r=x%10;
                maxi=max(maxi,r);
                count++;
                x/=10;
               
            }
            int enc=0;
            while(count--){
                enc=10*enc+maxi;
            }
            sum+=enc;
        }
        
        return sum;
    }
};