class Solution {
public:
    bool pukuMathaMota(string s , int left,int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if(s[left]==s[right]){
                left++;
                right--;
            }
            // if we found mismatch
            else{
                return pukuMathaMota(s,left+1,right) || pukuMathaMota(s,left,right-1);
            }
        }
        return true;
    }
};