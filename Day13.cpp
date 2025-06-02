class Solution {
public:
    int arraySign(vector<int>& nums) {
        int i=0,mult=1;
        while(i!=nums.size()){
            mult*=nums[i];
            if(mult<0) mult=-1;
            else if(mult==0) {
                return 0;
                break;}
            else{mult=1;}
            i++;    }
        return mult;
    }
};
