class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int pos=i+1;
            if(n % pos==0){
                sum+=nums[i]*nums[i];
            }
        }
        return sum;
    }
};