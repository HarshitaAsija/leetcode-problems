class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // If there are no strings, answer is empty
        if(strs.empty())
            return "";

        // Assume the first string is our current prefix
        string prefix = strs[0];

        // Compare this prefix with every other string
        for(int i = 1; i < strs.size(); i++)
        {

            // Keep reducing the prefix until
            // it becomes the prefix of strs[i]
            while(strs[i].find(prefix) != 0)
            {

                // Remove the last character
                prefix.pop_back();

                // If nothing is left,
                // there is no common prefix
                if(prefix.empty())
                    return "";
            }
        }

        return prefix;
    }
};