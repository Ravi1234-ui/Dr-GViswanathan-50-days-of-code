class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int > res;
        map<int,int> numMap;
        for(int i=0;i<n;i++){
            numMap[nums[i]]=i;  }
        for(int i=0;i<n;i++){
            int complement = target - nums[i];
            if(numMap.count(complement) && numMap[complement]!=i){
                res.push_back(i);
                res.push_back(numMap[complement]);
                return res;
            }
        }
        return res;
    }
};
