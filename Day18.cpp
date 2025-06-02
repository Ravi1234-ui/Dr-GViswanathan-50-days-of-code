class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int > map;
        for(int i: nums){
            if(map.count(i)){
                return true;
            }
            else{
                map[i]++;
            }
        }
        return false;
    }
};
