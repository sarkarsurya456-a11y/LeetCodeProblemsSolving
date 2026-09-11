class Solution {
    bool toCheck(string& s, int left, int right,bool deleted) {

        // Base case
        if (left >= right) {
            return true;
        }

        
        if (s[left] != s[right]) {
            if (deleted == true) {
                return false;
            }
            bool skipLeft = toCheck(s, left + 1, right,true);
            bool skipRight = toCheck(s, left, right - 1,true);

            if (skipLeft == true || skipRight == true) {
                return true;
            }
            return false;
        }
        
        return toCheck(s, left + 1, right - 1,deleted);
    }

public:
    bool validPalindrome(string s) {
         return toCheck(s, 0, s.size() - 1,false);
          }
};