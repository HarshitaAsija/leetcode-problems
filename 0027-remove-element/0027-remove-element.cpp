class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // k tells us where to put the next
        // valid element
        int k = 0;

        // Traverse the entire array
        for (int i = 0; i < nums.size(); i++) {

            // If current element is NOT equal to val,
            // we want to keep it
            if (nums[i] != val) {

                nums[k] = nums[i];

                // Move to the next position
                k++;
            }
        }

        // k = number of elements remaining
        return k;
    }
};