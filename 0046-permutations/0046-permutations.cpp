class Solution {
    void getpermute(vector<int>& nums,int indx,vector<vector<int>>&ans){
        if(indx==nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i =indx;i<nums.size();i++){
            swap(nums[indx],nums[i]);
            getpermute(nums,indx+1,ans);
            swap(nums[indx],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
        getpermute(nums,0,ans);

        return ans;
    }
};