class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        
       std::sort(nums.begin(), nums.end(), [](int a, int b) {
        return (a % 2 < b % 2) || (a % 2 == b % 2 && a < b);
    });
        return nums;
    }
};