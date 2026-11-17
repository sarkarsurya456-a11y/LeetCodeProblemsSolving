
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int count = 0;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {

                if (count > 0) {
                    ans += s[i];
                }

                st.push(s[i]);
                count++;
            }

            else if (s[i] == ')') {

                count--;

                if (count > 0) {
                    ans += s[i];
                }

                st.pop();
            }
        }

        return ans;
    }
};
