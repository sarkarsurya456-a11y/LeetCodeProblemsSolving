class Solution {
public:
    bool judgeSquareSum(int c) {
        int left = 0;
        int right =sqrt(c);
        while (left <= right) {
            int long long sum = 1LL * left * left + 1LL * right * right;
            if (sum <= c) {
                left++;
            }else {
                right --;
            }
            if (sum == c) {
                return true;
            }
        }
        return false;
    }
};