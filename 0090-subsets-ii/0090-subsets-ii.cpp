class Solution {
    void printSubsets(vector<int>& nums, vector<int>& ans, int i,
                      vector<vector<int>>& result) {

        if (i == nums.size()) {
            result.push_back(ans);
            return;
        }

        // Include part
        ans.push_back(nums[i]);
        printSubsets(nums, ans, i + 1, result);

        // Backtrack
        ans.pop_back();

        // Exclude part
        int indx = i + 1;

        while (indx < nums.size() && nums[indx] == nums[indx - 1]) {
            indx++;
        }

        printSubsets(nums, ans, indx, result);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<vector<int>> result;

        printSubsets(nums, ans, 0, result);

        return result;
    }
};