class Solution {
public:
    int addDigits(int num) {
        int total=0;
        int sum=0;
        while(num){
            int digit=num%10;
            total+=digit;
            num/=10;
        }
        while(total){
                int digi=total%10;
                sum+=digi;
                total/=10;
            } 
        if(sum>=10 && sum<20) return sum%9;
        else{
            return sum; 
        }

    }
};
