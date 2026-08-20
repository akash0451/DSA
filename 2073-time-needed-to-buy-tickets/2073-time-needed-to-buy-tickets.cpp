class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        queue<int>q;
        int time=0;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(tickets[k]!=0){
            tickets[q.front()]--;
            if(tickets[q.front()]){
               q.push(q.front());
            }
            q.pop();
            time++;
            }
        
        

        return time;

    }
    
};