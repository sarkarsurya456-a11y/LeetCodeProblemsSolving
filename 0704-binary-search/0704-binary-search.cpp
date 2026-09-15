class Solution {
    int binSearch(vector<int>& nums, int target, int left, int right) {
        if (left > right) {
            return -1;
        }

        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] > target) {
            return binSearch(nums, target, left, mid - 1);
        }

        return binSearch(nums, target, mid + 1, right);
    }

public:
    int search(vector<int>& nums, int target) {
        return binSearch(nums, target, 0, nums.size() - 1);
    }
};