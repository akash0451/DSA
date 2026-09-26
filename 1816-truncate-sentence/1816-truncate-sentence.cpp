class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> arr;

     string word = "";

     for(char ch : s)
     {
     if(ch == ' ')
     {
        arr.push_back(word);
        word = "";
     }
     else
     {
        word += ch;
     }
     }   
     arr.push_back(word);
      string ans="";
     for(int i=0;i<k;i++){
       ans+=arr[i];
       ans+=' ';
     }
     ans.pop_back();
     return ans;
      }
};