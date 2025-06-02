class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0,place=0;
        for(int i=columnTitle.size()-1;i>=0;i--){
            int x=(int)columnTitle[i] - 65 +1;
            ans += x * pow(26,place);
            place++;
        }
        return ans;
    }
};
