class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Key = sorted version of word
        // Value = words having the same sorted version
        unordered_map<string, vector<string>> mp;

        // Process every word
        for (string word : strs) {

            // Create a copy of the word
            string key = word;

            // Sort the characters
            sort(key.begin(), key.end());

            // Put the original word into its group
            mp[key].push_back(word);
        }

        vector<vector<string>> ans;

        // Collect all groups
        for (auto& pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};