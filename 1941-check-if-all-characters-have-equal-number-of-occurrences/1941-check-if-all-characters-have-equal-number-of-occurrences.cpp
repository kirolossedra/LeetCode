class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
            int flag  = 1;
                unordered_map <char,int> m;
            for(auto t : s)
                m[t]++;
        int rand_freq;
            for(auto pair : m)
                rand_freq = pair.second;
        
            for(auto pair : m)
                if(rand_freq xor pair.second)
                    flag = 0;
        
        
        return flag;

            
            
                
            
        
        
    }
};