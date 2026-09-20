class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // If array is empty, answer is 0
        if (nums.empty()) {
            return 0;
        }

        // Sort the array
        sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        // Traverse the sorted array
        for (int i = 1; i < nums.size(); i++) {

            // If numbers are consecutive
            if (nums[i] == nums[i - 1] + 1) {
                current++;
            }

            // If duplicate, simply ignore it
            else if (nums[i] == nums[i - 1]) {
                continue;
            }

            // Sequence has broken
            else {
                // Update longest sequence
                longest = max(longest, current);

                // Start a new sequence
                current = 1;
            }
        }

        // Check the final sequence
        longest = max(longest, current);

        return longest;
    }
};