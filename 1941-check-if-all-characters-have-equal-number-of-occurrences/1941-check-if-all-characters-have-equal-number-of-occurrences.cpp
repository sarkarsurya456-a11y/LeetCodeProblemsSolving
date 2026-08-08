class Solution {
public:
    bool areOccurrencesEqual(string s) {
       int count[26];
       for(int i =0;i<s.size();i++){
        count[s[i]-'a']++;
       } 
       int freq=0;
       for(int i =0;i<26;i++){
        if(count[i]>0){
            freq=count[i];
        }
       }
     for(int i = 0; i < 26; i++) {
            if(count[i] > 0 && count[i] != freq) {
                return false;
            }
        }
        return true ;
    }
};