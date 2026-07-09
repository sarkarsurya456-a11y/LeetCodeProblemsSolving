class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int  target =0;
         int left =0;

        for(int i =0;i<nums.size();i++){
            if(nums[i]!=target){
                swap(nums[left],nums[i]);
                left++;
            }
        }
    }
};