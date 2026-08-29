class Solution {
    void printSubsets(vector<int>& nums, vector<int>&ans, int i,vector<vector<int>>& result) {
        if (i == nums.size()) {
            result.push_back(ans);
            return;
        }
        // include part
        ans.push_back(nums[i]);
        printSubsets(nums, ans, i + 1,result);
         //exclude part
        ans.pop_back();
        printSubsets(nums, ans, i + 1,result);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>>result;
        printSubsets(nums, ans, 0,result);

        return result;
    }
};