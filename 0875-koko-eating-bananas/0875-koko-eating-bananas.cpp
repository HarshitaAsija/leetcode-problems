class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1, r = *max_element(piles.begin(), piles.end());
        while (l < r) {
            long long m = l + (r - l) / 2;
            long long hours = 0;
            for (int p : piles) {
                hours += (p + m - 1) / m;
            }
            if (hours <= h)
                r = m;
            else
                l = m + 1;
        }
        return (int)l;
    }
};
