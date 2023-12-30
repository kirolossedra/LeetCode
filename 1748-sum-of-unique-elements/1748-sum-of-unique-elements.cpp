class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    unordered_map <int,int> t;
        int sum=0;
        
        for(auto l : nums)
            t[l]++;
        for(auto pair : t)
            sum+=(pair.second==1)? pair.first:0;
        
        return sum;
        
        
    }
};