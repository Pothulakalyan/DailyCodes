class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int numOfRows,numOfColumns;
        numOfRows=mat.size();
        numOfColumns=mat[0].size();
        
        vector<bool>rows(numOfRows,false);
        vector<bool>cols(numOfColumns,false);
        
        for(int i=0;i<numOfRows;i++){
            for(int j=0;j<numOfColumns;j++){
                if(mat[i][j]==0){
                    rows[i]=true;
                    cols[j]=true;
                }
            }
        }
        
        
        //setting rows to 0
        for(int i=0;i<numOfRows;i++){
            if(rows[i]){
                for(int j=0;j<numOfColumns;j++){
                    mat[i][j]=0;
                }
            }
        }
        //setting columns to 0
        for(int j=0;j<numOfColumns;j++){
            if(cols[j]){
                for(int i=0;i<numOfRows;i++){
                    mat[i][j]=0;
                }
            }
        }
        
    }
};