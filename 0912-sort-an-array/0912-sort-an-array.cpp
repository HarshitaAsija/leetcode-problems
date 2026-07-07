class Solution {
public:

    // Function to merge two already sorted halves
    // Left half  -> nums[left ... mid]
    // Right half -> nums[mid+1 ... right]
    void merge(vector<int>& nums, int left, int mid, int right)
    {
        vector<int> temp;     // Temporary array to store merged result

        int i = left;         // Pointer for left half
        int j = mid + 1;      // Pointer for right half

        // Compare elements from both halves
        // Pick the smaller one and put it into temp
        while(i <= mid && j <= right)
        {
            if(nums[i] <= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // If left half still has elements, copy them
        while(i <= mid)
        {
            temp.push_back(nums[i]);
            i++;
        }

        // If right half still has elements, copy them
        while(j <= right)
        {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy sorted elements back into original array

        // Why temp[k-left] ?
        // Example:
        // nums indices = 4 5 6 7
        // temp indices = 0 1 2 3
        // So:
        // nums[4] = temp[0]
        // nums[5] = temp[1]
        // Hence index becomes (k-left)

        for(int k = left; k <= right; k++)
        {
            nums[k] = temp[k - left];
        }
    }


    // Recursive Merge Sort function
    void mergeSort(vector<int>& nums, int left, int right)
    {
        // Base Case:
        // If there is only one element (or no element),
        // it is already sorted.
        if(left >= right)
            return;

        // Find middle safely
        // Safer than (left+right)/2 because it avoids overflow
        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(nums, left, mid);

        // Sort right half
        mergeSort(nums, mid + 1, right);

        // Merge both sorted halves
        merge(nums, left, mid, right);
    }


    vector<int> sortArray(vector<int>& nums)
    {
        // Sort the complete array
        // First index = 0
        // Last index = nums.size()-1
        mergeSort(nums, 0, nums.size()-1);

        return nums;
    }
};