class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // This solution is brute force in memory
        
        
        unordered_map < string, vector<string>> SortedMap;
        vector<vector<string>> result;
        
        
        for(auto s : strs){
            string temp = s;
            
            sort(temp.begin(),temp.end());
            
            SortedMap[temp].push_back(s);
            
            
        }
        
        for (auto pair : SortedMap){
            vector<string> t;
            for(auto word : pair.second){
                t.push_back(word);
            }
            
            
            result.push_back(t);
            
            
        }
        return result;
    }
};