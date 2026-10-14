
class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagrams must have equal lengths
        if (s.size() != t.size()) {
            return false;
        }

        // Frequency array for letters a to z
        int freq[26] = {0};

        // Count characters in s and subtract characters in t
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // Every frequency must be zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
