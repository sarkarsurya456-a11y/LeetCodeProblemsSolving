class Solution {
public:
    string change(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = tolower(s[i]);
            }
        }
        return s;
    }

        string toLowerCase(string s) { 
            return change(s);
             
    }
};