class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int start=0, end=m*n-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            int row_i=mid/n;
            int col_i=mid%n;
            if(matrix[row_i][col_i]==target)
            return 1;
            else if(matrix[row_i][col_i]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return 0;
    }
};