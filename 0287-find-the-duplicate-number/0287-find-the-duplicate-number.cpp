
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Start both pointers at the first array value
        int slow = nums[0];
        int fast = nums[0];

        // Find a meeting point inside the cycle
        do {
            slow = nums[slow];          // Move one step
            fast = nums[nums[fast]];    // Move two steps
        } while (slow != fast);

        // Reset one pointer to the starting position
        int ptr = nums[0];

        // Move both pointers one step at a time
        while (ptr != slow) {
            ptr = nums[ptr];
            slow = nums[slow];
        }

        // The meeting value is the duplicate
        return ptr;
    }
};
