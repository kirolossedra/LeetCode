#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); ++i) {
            // Avoid duplicates for the `i` index
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int l = i + 1;
            int r = nums.size() - 1;
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    result.push_back({nums[i], nums[l], nums[r]});
                    
                    // Avoid duplicates for the `l` index
                    while (l < r && nums[l] == nums[l + 1]) {
                        l++;
                    }
                    
                    // Avoid duplicates for the `r` index
                    while (l < r && nums[r] == nums[r - 1]) {
                        r--;
                    }
                    
                    l++;
                    r--;
                }
            }
        }
        
        return result;
    }
};
