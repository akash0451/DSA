class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freq;
        for(auto x: s){
            freq[x]++;
        }
       int count=freq.begin()->second;
       for(auto x: freq){
        if(x.second!=count)
        return 0;
       }
      return 1;     
    }
};