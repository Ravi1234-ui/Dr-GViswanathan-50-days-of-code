class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1 && !s.count(n)){
            s.insert(n);
            int sum=0;
            while(n){
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
            }
            n=sum;
        }
        return (n==1);
        }
};
