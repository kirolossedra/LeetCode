class Solution {
public:
    string customSortString(string order, string s) {
        
        
        unordered_map<char,int> sorter;
        for(int i=0; i<order.size(); i++){
            sorter[order[i]] = i+1;
            
        }
         std::sort(s.begin(), s.end(), [&sorter](char a, char b) {
        // Compare the values associated with the characters in the map
        return (sorter[a]!=sorter[b])? sorter[a] < sorter[b] : a < b;
    });
        
        return s;
        
        
        
    }
};