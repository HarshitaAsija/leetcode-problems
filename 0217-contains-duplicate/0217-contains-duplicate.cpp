
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Store numbers we have already encountered
        unordered_set<int> seen;

        for (int num : nums) {

            // If the number is already present,
            // we have found a duplicate
            if (seen.count(num)) {
                return true;
            }

            // Otherwise, insert the number
            seen.insert(num);
        }

        // No duplicate was found
        return false;
    }
};

