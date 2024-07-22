class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        unordered_map <int,string> m;
        
        vector<string> result;
        
        
        for(int i=0; i<names.size(); i++){

        m[heights[i]]= names[i];
        
        }
        
        sort(heights.begin(),heights.end());
        
        
        for(int i=0; i<names.size(); i++){
            result.push_back(m[heights[i]]);
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};