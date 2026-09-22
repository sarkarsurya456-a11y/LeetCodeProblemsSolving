class Solution {
    long long solve(int x, long long low, long long  high) {
        if (low > high) {
            return high;
        }
        long long mid = (low + high) / 2;

        if (mid * mid == x) {
            return mid;
        }

        else if (mid * mid < x) {
            return solve(x, mid + 1, high);
        } else {
            return solve(x, low, mid - 1);
        }
    }

public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        return solve(x, 1, x);
    }
};