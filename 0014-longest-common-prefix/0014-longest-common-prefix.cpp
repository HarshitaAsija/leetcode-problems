class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // Take the first string as the initial prefix
        string prefix = strs[0];

        // Compare it with every other string
        for (int i = 1; i < strs.size(); i++) {

            int j = 0;

            // Find matching characters
            while (j < prefix.size() &&
                   j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {

                j++;
            }

            // Keep only the matching part
            prefix = prefix.substr(0, j);

            // If nothing matches, return empty string
            if (prefix.empty()) {
                return "";
            }
        }

        return prefix;
    }

};