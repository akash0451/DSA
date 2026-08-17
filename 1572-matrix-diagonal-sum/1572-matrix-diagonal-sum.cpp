class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
              if(i==j)
              sum+=mat[i][j];
            }
        }
        int i=0,j=col-1;
        while(i<row && j>=0){
           sum+=mat[i][j];
           i++;
           j--;
        }
        if(row%2==0)
        return sum;
        else
        return sum-mat[row/2][row/2];
    }
};