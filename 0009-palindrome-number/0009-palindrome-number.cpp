class Solution {
    bool checkPalindrome(int x) {
        string s = to_string(x);
        int right = s.size() - 1;
        int left = 0;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            } else {
                left++;
                right--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(int x) { 
        return checkPalindrome(x); }
};