#define f(i,j,n) for(int i=j;i<n;i++)
// #define ll long long
class Solution {
public:
    void zeroFound(vector<vector<int>>& mat,int i,int j){
        f(k,0,mat.size())
            if(mat[k][j])
            mat[k][j]=1e9+2;
        f(k,0,mat[0].size())
            if(mat[i][k])
            mat[i][k]=1e9+2;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        f(i,0,matrix.size())
            f(j,0,matrix[0].size())
                if(matrix[i][j]==0)
                    zeroFound(matrix,i,j);
        f(i,0,matrix.size())
            f(j,0,matrix[0].size())
                if(matrix[i][j]==1e9+2)
                   matrix[i][j]=0; 
    }
};
