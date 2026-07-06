/*class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        for(auto it : freq)
        {
            if(it.second > nums.size()/2)
            {
                return it.first;
            }
        }

        return -1;
    }
};*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        for(int num : nums)
        {
            if(count == 0)
            {
                candidate = num;
                count = 1;
            }
            else if(num == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }
};