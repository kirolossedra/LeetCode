class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        
        int n= nums.size();
        
        unordered_map <int,int> mp;
        
        for( auto itr : nums)
            mp[itr]++;
        vector <int> temp;
        vector<vector<int>> s;
        
        while(n!=0){
            for(auto pair : mp){
                if(pair.second){
                    mp[pair.first]--;
                    temp.push_back(pair.first);
                    n--;
                }
                    
            }
            s.push_back(temp);
            temp={};
            
            
            
        }
        return s;
    }
};