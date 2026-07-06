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
/*dry run----

nums = [2,2,1,1,1,2,2]
Current num	Candidate	Count	Explanation
2	2	1	Count was 0 → choose new candidate
2	2	2	Same as candidate → count++
1	2	1	Different → count--
1	2	0	Different → count--
1	1	1	Count became 0 → choose new candidate
2	1	0	Different → count--
2	2	1	Count became 0 → choose new candidate*/