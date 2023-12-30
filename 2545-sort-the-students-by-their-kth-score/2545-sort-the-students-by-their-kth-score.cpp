class Solution {
public:
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        
        // lambda function  we capture value k using [] operator
        // then using the lambda function we modify its algorithm to return a 
        // different way of sorting
        
        std::sort(score.begin(), score.end(), [k](const std::vector<int>& a, const std::vector<int>& b) {
    return a[k] > b[k]; // Compare the first elements of each subvector
});
        return score;
        
    }
};