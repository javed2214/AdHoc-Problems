// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int inf=-12346;
        int R=matrix.size();
        int C=matrix[0].size();
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<R;k++)
                        if(matrix[k][j]!=0)
                            matrix[k][j]=inf;
                    for(int k=0;k<C;k++)
                        if(matrix[i][k]!=0)
                            matrix[i][k]=inf;
                }
            }
        }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(matrix[i][j]==inf){
                    matrix[i][j]=0;
                }
            }
        }
        return;
    }
};