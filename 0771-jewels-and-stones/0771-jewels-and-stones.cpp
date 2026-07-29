class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        string isjewel = {};
        int count =0;
      for(int i =0;i<jewels.size();i++){
            isjewel += jewels[i];
      }
      for(int i =0;i<stones.size();i++){
        if(isjewel.find(stones[i])!=string::npos){
            count++;
        }
      }
      return count;

    }
};