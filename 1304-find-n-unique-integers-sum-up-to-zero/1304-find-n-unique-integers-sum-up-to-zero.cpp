class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> akash;

        for (int i = 1; i <= n / 2; i++) {
            akash.push_back(i);
            akash.push_back(-i);
        }

        if (n % 2 != 0) {
            akash.push_back(0);
        }

        return akash;
    }
};