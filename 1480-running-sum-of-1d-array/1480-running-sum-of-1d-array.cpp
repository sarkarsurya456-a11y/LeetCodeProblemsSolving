class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum ;
        int prefix_sum=0;
        for(int i =0;i<nums.size();i++){
            prefix_sum= prefix_sum + nums[i];

            runningSum.push_back(prefix_sum);
        }

        return runningSum;
    }
};