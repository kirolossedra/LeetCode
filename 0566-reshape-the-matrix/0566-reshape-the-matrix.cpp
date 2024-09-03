class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        
        if(r *c != mat.size() * mat[0].size())
            return mat;
         std::vector<std::vector<int>> V(r, std::vector<int>(c, 0));
        
        
        int temp;
          for(int i=0; i<mat.size(); i++){
              for(int j=0; j<mat[0].size(); j++){
                  temp = mat[0].size() * i + j;
                  V[temp/c][temp%c] = mat[i][j];
              }
          }
        
        return V;
        

        
    }
};