class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int Current_wealth =0;
        int Max_wealth=0;
        for(int i=0;i<accounts.size();i++){
            Current_wealth =0;
            for(int j =0;j<accounts[i].size();j++){
                Current_wealth = Current_wealth + accounts[i][j];
            }
            if(Current_wealth>Max_wealth )
                Max_wealth = Current_wealth;
            }
            return Max_wealth ;
        }
    
    
};