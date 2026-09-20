class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // If array is empty
        if (nums.empty()) {
            return 0;
        }

        // Position where the next unique
        // element will be placed
        int k = 1;

        // Start from the second element
        for (int i = 1; i < nums.size(); i++) {

            // Since array is sorted,
            // duplicates will be next to each other
            if (nums[i] != nums[i - 1]) {

                // Store the unique element
                nums[k] = nums[i];

                k++;
            }
        }

        // k = number of unique elements
        return k;
    }
};