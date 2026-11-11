class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();

        int x=0;
        int y=0;

        for(int i=0;i<col;i++){
            if(mat[0][i]==0){
                x=1;
                // break;
            }
        }

        for(int j=0;j<row;j++){
            if(mat[j][0]==0){
                y=1;
                // break;
            }
        }

        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                if(mat[i][j]==0){
                    mat[0][j]=0;
                    mat[i][0]=0;
                }
            }
        }

        for(int i=1;i<col;i++){
            if(mat[0][i]==0){
                for(int j=1;j<row;j++){
                    mat[j][i]=0;
                }
            }
        }

        for(int j=1;j<row;j++){
            if(mat[j][0]==0){
                for(int i=1;i<col;i++){
                    mat[j][i]=0;
                }
            }
        }

        if(x==1){
            for(int i=0;i<col;i++){
                mat[0][i]=0;
            }
        }
        if(y==1){
            for(int i=0;i<row;i++){
                mat[i][0]=0;
            }
        }
    }
};