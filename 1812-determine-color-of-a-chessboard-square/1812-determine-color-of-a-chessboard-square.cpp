class Solution {
public:
    bool squareIsWhite(string coordinates) {
       int x=coordinates[0]-'a'+1;
       int y=int(coordinates[1]);
       if((x+y)%2!=0)
       return 1;
       else
       return 0;
    }
};