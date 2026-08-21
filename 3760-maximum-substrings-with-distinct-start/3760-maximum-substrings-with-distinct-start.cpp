class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>s1(s.begin(),s.end());
        return s1.size();
    }
};