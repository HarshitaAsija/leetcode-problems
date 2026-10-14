
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Number -> index where it was previously seen
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            // Find the number needed to reach the target
            int complement = target - nums[i];

            // If the complement exists, we found the pair
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // Otherwise, store the current number and index
            mp[nums[i]] = i;
        }

        // The problem guarantees one valid answer
        return {};
    }
};
