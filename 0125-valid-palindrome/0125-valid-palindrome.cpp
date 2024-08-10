class Solution {
public:
    bool isPalindrome(std::string s) {
        if (s.empty()) {
            return true;
        }

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // Move left index to the next alphabetic character
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            // Move right index to the previous alphabetic character
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            
            // Check if characters are equal after converting to lowercase
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
            
            // Move both indices towards the center
            left++;
            right--;
        }

        return true;
    }
};