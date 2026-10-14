
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Sorted word -> list of anagrams
        unordered_map<string, vector<string>> mp;

        for (string word : strs) {
            // Sort the characters to form a common key
            string key = word;
            sort(key.begin(), key.end());

            // Add the original word to its matching group
            mp[key].push_back(word);
        }

        // Collect all groups from the map
        vector<vector<string>> ans;

        for (auto& entry : mp) {
            ans.push_back(entry.second);
        }

        return ans;
    }
};
