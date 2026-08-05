class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        vector<int> diff;

        if (s1 == s2) {
            return true;
        }

        for (int i = 0; i < s2.size(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }
        if (diff.size() != 2) {
            return false;
        }
        if (s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]]) {
            return true;
        }

        return false;
    }
};