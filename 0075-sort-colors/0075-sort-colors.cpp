class Solution {
public:
    void sortColors(vector<int>& nums) {

        // low -> next position of 0
        // mid -> current element
        // high -> next position of 2

        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid <= high)
        {
            // If current element is 0
            if(nums[mid] == 0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }

            // If current element is 1
            else if(nums[mid] == 1)
            {
                mid++;
            }

            // If current element is 2
            else
            {
                swap(nums[mid],nums[high]);
                high--;

                // Don't increment mid here because
                // swapped element needs checking.
            }
        }
    }
};