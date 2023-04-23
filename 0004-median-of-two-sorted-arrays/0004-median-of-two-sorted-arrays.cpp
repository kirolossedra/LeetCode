// Optimized Approach: Binary Search
    // Time Complexity: O(log(min(m,n)))
   //  Space Complexity: O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    if (n > m) {
        return findMedianSortedArrays(nums2, nums1);
    }
    int l = 0;
    int r = n;
    while (l <= r) {
        int i = (l + r) / 2;
        int j = (n + m + 1) / 2 - i;
        if (j > 0 && i < n && nums2[j - 1] > nums1[i]) {
            l = i + 1;
        } else if (i > 0 && j < m && nums1[i - 1] > nums2[j]) {
            r = i - 1;
        } else {
            int leftMax = 0;
            if (i == 0) {
                leftMax = nums2[j - 1];
            } else if (j == 0) {
                leftMax = nums1[i - 1];
            } else {
                leftMax = max(nums1[i - 1], nums2[j - 1]);
            }
            if ((n + m) % 2 == 1) {
                return leftMax;
            }
            int rightMin = 0;
            if (i == n) {
                rightMin = nums2[j];
            } else if (j == m) {
                rightMin = nums1[i];
            } else {
                rightMin = min(nums1[i], nums2[j]);
            }
            return (leftMax + rightMin) / 2.0;
        }
    }
    return -1.0;
}
};