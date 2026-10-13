
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        // Store the greatest original element seen on the right
        int maxi = arr[n - 1];

        // The last element has nothing to its right
        arr[n - 1] = -1;

        // Traverse from second-last element to the first
        for (int i = n - 2; i >= 0; i--) {

            // Save the original value before replacing it
            int current = arr[i];

            // Replace the current element with the
            // greatest original element to its right
            arr[i] = maxi;

            // Update maximum using the original value
            maxi = max(maxi, current);
        }

        return arr;
    }
};

