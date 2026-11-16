class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] != "C" && operations[i] != "D" &&
                operations[i] != "+") {
                s.push(stoi(operations[i]));
            } else if (operations[i] == "C") {
                s.pop();
            } else if (operations[i] == "D") {
                int x = s.top();
                s.push(x * 2);
            } else if (operations[i] == "+") {
                int x = s.top();
                s.pop();

                int y = s.top();

                int sum = y + x;

                s.push(x);
                s.push(sum);
            }
        }

        int Totalsum = 0;

        while (!s.empty()) {
            Totalsum += s.top();
            s.pop();
        }

        return Totalsum;
    }
};