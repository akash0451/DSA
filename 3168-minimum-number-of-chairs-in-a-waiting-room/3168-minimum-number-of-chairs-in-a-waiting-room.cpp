class Solution {
public:
    int minimumChairs(string s) {
        vector<int>data;
        int count=0;
        
        for(char c: s){
            if(c=='E')
            count++;
            else{
            count--;
            }
             data.push_back(count);
            
        }
         return *max_element(data.begin(),data.end());
        
    }
};