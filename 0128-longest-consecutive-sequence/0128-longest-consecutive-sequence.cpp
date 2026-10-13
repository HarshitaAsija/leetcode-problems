
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int num : st) {

            // Start only if num is the first element
            // of a consecutive sequence
            if (st.find(num - 1) == st.end()) {
                int current = num;
                int length = 1;

                // Count consecutive numbers after num
                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                // Keep the longest sequence found
                longest = max(longest, length);
            }
        }

        return longest;
    }
};
