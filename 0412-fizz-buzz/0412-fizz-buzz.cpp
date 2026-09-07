class Solution {
    vector<string> tocheckFizzbuzz(int n) {
        vector<string> ans;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                ans.push_back("Fizz");
            } else if (i % 5 == 0) {
                ans.push_back("Buzz");
            } else {
                ans.push_back(to_string(i));//7 ke "7" e convert korar jonno string e convert 
                                            // kora cause amr ans vector sob elements string e  
            }                               
        }
        return ans;
    }

public:
    vector<string> fizzBuzz(int n) {
         return tocheckFizzbuzz( n) ;
    }
};