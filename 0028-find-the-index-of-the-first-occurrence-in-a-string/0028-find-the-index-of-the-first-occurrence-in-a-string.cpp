class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) {
            return -1;
        }
        int left = 0;
        int right = 0;
        for (; right < haystack.size();) {
            if (haystack[right] == needle[left]) {
                left++;
                right++;
                if (left == needle.size()) {
                    return right - left;
                }
            } else {
                right =right-left+1;
                left = 0;
            }
        }
        return -1;
    }
}

;