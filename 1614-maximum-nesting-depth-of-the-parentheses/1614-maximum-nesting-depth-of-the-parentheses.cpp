class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int count=0, maxCount=0;

        for(char c: s)
        {
            if(st.empty())
            count=0;

            if(c=='(')
            {
                st.push(c);
                count++;
            }
            else if(!st.empty() && c==')')
            {
                st.pop();
                count--;
            }
            maxCount=max(count,maxCount);
        }
        return maxCount;
        
    }
};