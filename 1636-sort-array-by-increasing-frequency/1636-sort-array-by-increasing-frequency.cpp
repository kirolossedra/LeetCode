class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        
        // there is two solutions 
        // one is NlgN * N and One is just N * N
        // NlgN * N is to sort based on a frequency map using lambda functions
        unordered_map <int,int> m;
        
        for(auto num : nums){
            
            m[num]++;
        }
        
  // Sort the vector based on the values in the map
    std::sort(nums.begin(), nums.end(), [&m](int a, int b) {
        return (m[a] != m[b])?m[a] < m[b] : a>b;
    });
        return nums;
    }
};