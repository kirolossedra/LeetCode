class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        unordered_map <int,int> mirror1;
        unordered_map <int,int> mirror2;
        
        for(auto n : target){
            mirror1[n]++;
        }
        for(auto m : arr){
            mirror2[m]++;
        }
        
        for(auto s : mirror1){
            if(s.second != mirror2[s.first]){
                return false;
            }
        }
        
         for(auto s : mirror2){
            if(s.second != mirror1[s.first]){
                return false;
            }
        }
        return true;
        
    }
};