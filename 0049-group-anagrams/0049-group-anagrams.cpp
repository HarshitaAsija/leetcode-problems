class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Key  : Sorted version of string
        // Value: All strings having that sorted version
        unordered_map<string, vector<string>> mp;

        for(string s : strs)
        {
            string temp = s;

            // Sort characters
            sort(temp.begin(), temp.end());

            // Store original string against sorted string
            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;

        // Collect all groups
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};