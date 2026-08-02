class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxi=0;
        for(int x: prices){
            minPrice=min(minPrice,x);
            maxi=max(maxi,x-minPrice);
        }
        return maxi;
    }
};