class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && isdigit(s[i]))
            {
              st.pop();
            }
            if(isalpha(s[i]))
            st.push(s[i]);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};