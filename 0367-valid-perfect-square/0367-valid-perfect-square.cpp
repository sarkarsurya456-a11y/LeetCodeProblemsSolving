class Solution {
    bool binarySearch(long long left, long long right, int num) {

        if (left > right) {
            return false;
        }

        long long mid = left + (right - left) / 2;

        if (mid * mid == num) {
            return true;
        }

        if (mid * mid > num) {
            return binarySearch(left, mid - 1, num);
        }

        return binarySearch(mid + 1, right, num);
    }

public:
    bool isPerfectSquare(int num) {
        return binarySearch(1, num, num);
    }
};