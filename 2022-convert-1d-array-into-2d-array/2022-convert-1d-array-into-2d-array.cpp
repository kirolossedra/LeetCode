class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
       
        int globalCounter = 0;
        if( m*n != original.size())
            return {};
        std::vector<std::vector<int>> V(m, std::vector<int>(n, 0));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                V[i][j] = original[globalCounter];
                if(globalCounter<original.size())
                     globalCounter++;
               
            }
        }
        
        return V;
        
    }
};