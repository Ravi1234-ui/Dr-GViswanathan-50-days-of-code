class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Floyd’s Tortoise and Hare method
        int slow = nums[0], fast = nums[0];
        // First intersection point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        // Find entrance to cycle (duplicate)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
