
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        // Create an answer array of length 2*n
        vector<int> ans(2 * n);

        // Copy the original array into both halves
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // First copy
            ans[i + n] = nums[i];   // Second copy
        }

        return ans;
    }
};
