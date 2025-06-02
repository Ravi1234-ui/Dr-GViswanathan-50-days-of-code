class Solution {
public:
    vector<int> getRow(int row) {
        vector<int> res;
        long long val = 1;
        res.push_back(val);  // C(n, 0) = 1
        for (int i = 1; i <= row; ++i) {
            val = val * (row - i + 1) / i;  // C(n, k) = C(n, k-1) * (n-k+1)/k
            res.push_back(val);
        }
        return res;
        
    }
    
};
