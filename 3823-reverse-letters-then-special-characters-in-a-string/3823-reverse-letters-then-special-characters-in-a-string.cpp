class Solution {
public:
    string reverseByType(string s) {
        int n = s.size();

        // Reverse alphanumeric characters
        int i = 0, j = n - 1;

        while (i < j) {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        // Reverse special characters
        int k = 0, l = n - 1;

        while (k < l) {
            if (isalnum(s[k]))
                k++;
            else if (isalnum(s[l]))
                l--;
            else {
                swap(s[k], s[l]);
                k++;
                l--;
            }
        }

        return s;
    }
};