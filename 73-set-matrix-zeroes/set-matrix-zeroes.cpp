class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // m->rows ; n -> columns
        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool>colZero(n,false);
        vector<bool>rowZero(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    colZero[j]=true;
                    rowZero[i]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(colZero[j]==true || rowZero[i]==true) matrix[i][j]=0;
            }
        }
    }
};
