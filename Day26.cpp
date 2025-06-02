class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
    int findFirst(vector<int>& nums, int target){
        int st=0,end=nums.size()-1,first=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target) {
                first=mid;
                end=mid-1;  // Search left half
            } else if(nums[mid]<target) st=mid+1;
            else end=mid-1;
        }
        return first;
    }
    int findLast(vector<int>& nums, int target){
        int st=0,end=nums.size()-1,last=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target) {
                last=mid;
                st=mid+1;   // Search right half
            } else if(nums[mid]<target) st=mid+1;
            else end=mid-1;
        }
        return last;
    }
};
