class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // i points where next valid element should go
        int i = 0;

        for(int j = 0; j < nums.size(); j++)
        {
            // Keep only elements != val
            if(nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }

        // i = new size
        return i;
    }
};