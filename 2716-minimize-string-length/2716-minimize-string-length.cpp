class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>s1;
        for(auto x: s){
            s1.insert(x);
        }
        return s1.size();
    }
};