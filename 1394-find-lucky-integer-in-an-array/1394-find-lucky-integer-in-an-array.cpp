class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        vector<int>val;
        unordered_map<int,int>freq;
        for(auto x: arr){
            freq[x]++;
        }
        for(auto x: freq){
            if(x.first==x.second){
                val.push_back(x.first);
            if(x.first>ans)
            ans=x.first;  
        } 
        
        }
       return ans;
    }
};