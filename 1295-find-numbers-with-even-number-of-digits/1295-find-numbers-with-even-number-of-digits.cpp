class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int Evencount =0;
        for(int i =0; i<nums.size();i++){
         int n=nums[i];
            int digitscount=0;

            while(n>0){
                n=n/10;
                digitscount++;
            }if(digitscount % 2 ==0){
                 Evencount++;
            }
            
         }

         return Evencount;
        }
        
    
};