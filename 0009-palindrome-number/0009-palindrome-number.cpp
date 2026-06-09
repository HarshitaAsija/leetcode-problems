class Solution {
public:
    bool isPalindrome(int n) {
        int copy=n;
        long long int revNum=0;
        while(n>0){
            int lastDigit=n%10;
            revNum=(revNum*10)+lastDigit;
            n=n/10;
        }
        if(revNum==copy) return true;
        return false;

        
    }
};