class Solution {
    int calProductofDigits(int n){
           int digit;
           int product=1;
           while(n>0){
            digit= n%10;
            product = product * digit; 
            n=n/10;
           }
           return product ;
    }
    int calSumofDigits(int n){
        int digit;
        int sum =0;
        while(n>0){
            digit= n%10;
             sum = sum + digit; 
            n=n/10;
           }
           return sum ;
    }
    int calSub(int n){
   int product= calProductofDigits(n);
   int sum = calSumofDigits(n);

       int sub = product - sum;
       return sub;
    }
public:
    int subtractProductAndSum(int n) {
        return calSub(n);
    }
};