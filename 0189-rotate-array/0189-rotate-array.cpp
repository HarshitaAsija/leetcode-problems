class Solution {
public:

    // Reverse elements between two indices.
    void reverseArray(vector<int>& nums, int left, int right)
    {
        while(left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        // If k is larger than array size,
        // rotating n times gives the same array.
        k = k % n;

        // Step 1: Reverse the whole array.
        reverseArray(nums, 0, n - 1);

        // Step 2: Reverse first k elements.
        reverseArray(nums, 0, k - 1);

        // Step 3: Reverse remaining elements.
        reverseArray(nums, k, n - 1);
    }
};