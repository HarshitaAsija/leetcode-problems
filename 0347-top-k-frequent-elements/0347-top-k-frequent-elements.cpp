class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Store frequency of each element.
        unordered_map<int, int> freq;

        for(int num : nums)
        {
            freq[num]++;
        }

        // Max Heap:
        // Pair = {frequency, element}
        priority_queue<pair<int, int>> pq;

        // Push every element along with its frequency.
        for(auto it : freq)
        {
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        // Extract top k frequent elements.
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};