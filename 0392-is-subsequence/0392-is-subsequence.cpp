class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left = 0;
        int right = 0;
        for (int i = 0; i < t.size(); i++) {
            if (left < t.size() && s[left] == t[right]) {
                left++;
                right++;
            }else{
                right ++;
            }
        }
        if (left == s.size()) {
            return true;
        }

        return false;
    }
};