class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Store frequency of each element.
        unordered_map<int, int> freq;

        for(int num : nums)
        {
            freq[num]++;
        }

        // Max Heap
        // Pair format = {frequency, element}
        priority_queue<pair<int, int>> maxHeap;

        // Push every element along with its frequency.
        for(auto it : freq)
        {
            maxHeap.push({it.second, it.first});
        }

        vector<int> ans;

        // Extract the top k frequent elements.
        while(k--)
        {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return ans;
    }
};