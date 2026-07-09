class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();

        // Count the number of "drops" in the array.
        // A drop occurs when current element is greater than next element.
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            // Compare current element with next element.
            // (i+1)%n makes the last element compare with the first.
            if(nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }

        // If there is at most one drop,
        // the array is sorted and rotated.
        return count <= 1;
    }
};