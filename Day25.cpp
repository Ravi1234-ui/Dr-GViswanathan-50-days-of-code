class Solution {
public:
    void rotate(vector<int>& nums, int key) {
        int n= nums.size();
        key=key%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+key);
        reverse(nums.begin()+key,nums.end());
    }
};
