class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0;

        // First window
        for(int i = 0; i < k; i++)
        {
            if(blocks[i] == 'W')
                count++;
        }

        int mn = count;

        // Sliding window
        for(int i = k; i < blocks.size(); i++)
        {
            if(blocks[i] == 'W')
                count++;

        
            if(blocks[i - k] == 'W')
                count--;

            mn = min(mn, count);
        }

        return mn;
    }
};