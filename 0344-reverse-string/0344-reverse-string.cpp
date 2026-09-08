class Solution{
    void reverseString(vector<char>& s,int i) {
        if(i >= s.size()/2){
            return ;
        }
           swap(s[i],s[s.size()-1-i]);

           reverseString(s,i+1);
    
    }
    public:
    void reverseString(vector<char>& s) {
        reverseString(s, 0);
    }
};