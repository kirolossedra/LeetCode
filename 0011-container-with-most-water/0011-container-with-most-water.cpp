#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int max_area = 0;

        while (l < r) {
            // Calculate the current area
            int current_height = std::min(height[l], height[r]);
            int current_width = r - l;
            int current_area = current_height * current_width;

            // Update the maximum area if the current area is larger
            max_area = std::max(max_area, current_area);

            // Move pointers
            if (height[l] < height[r]) {
                l++;
            } else if (height[r] < height[l]) {
                r--;
            } else {
                // Move both pointers when heights are equal
                l++;
                r--;
            }
        }

        return max_area;
    }
};
