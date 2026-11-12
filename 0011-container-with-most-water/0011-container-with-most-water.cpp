class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int n = height.size();
        int right = n - 1;
        int maxwater = 0;
        while (left < right) {
            int width = right - left;
            // Minimum height
            int h = min(height[left], height[right]);
            int Area = width * h;

            maxwater = max(maxwater, Area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxwater;
    }
};