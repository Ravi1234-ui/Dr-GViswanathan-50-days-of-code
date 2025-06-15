class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;       // 0 and 1 are not prime
        if (n <= 3) return true;        // 2 and 3 are prime
        if (n % 2 == 0 || n % 3 == 0) return false; // handle multiples of 2 and 3
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
     return true;
    }
    int countOnes(int num) {
        int count = 0;
        while (num) {
            num = num & (num - 1); // Removes the rightmost 1
            count++;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(isPrime(countOnes(i))){count++;}
        }
        return count;
    }
};
