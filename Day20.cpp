class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=nums[0];
        int maxi= nums[0];
        for(int i=1;i<nums.size();i++){
            mini= min(mini,nums[i]);
            maxi= max(maxi,nums[i]);
        }
        if(maxi%mini==0) return mini;
        int k=1;
        for(int i=2;i<=mini;i++){
            if(mini%i==0 && maxi%i==0) k=i;
        }
        return k;
    }
};
