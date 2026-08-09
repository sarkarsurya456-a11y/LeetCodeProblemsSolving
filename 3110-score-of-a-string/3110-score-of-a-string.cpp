class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int adjs;
        for(int i =0;i<s.size()-1;i++){
           adjs = abs(s[i]-s[i+1]);
           sum= sum+ adjs;
        }
        return sum;
    }
};