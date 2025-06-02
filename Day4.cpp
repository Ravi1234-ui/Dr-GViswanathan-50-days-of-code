class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x>=0 && x<=9) return true;
        if(x>=10 && x<=99){
            int a=x%10;
            x/=10;
            int b=x%10;
            return (a==b);
        }
        int temp=x;
        long reverse=0;
        while(temp){
            int digit=temp%10;
            reverse=reverse*10 + digit;
            temp/=10;
        }
        return(reverse==x);
    }
};
