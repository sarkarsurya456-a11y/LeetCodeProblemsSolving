class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> freq;

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (freq[nums[i]] == 1) {
                ans.push_back(nums[i]);
            }
            freq[nums[i]]++;
        }

        return ans;
    }
};