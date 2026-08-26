class Solution {
public:

    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> seen;

        // Put all numbers into the set
        for (int x : nums) {
            seen.insert(x);
        }

        int ans = 0;

        // Find the start of each sequence
        for (int x : nums) {

            if (!seen.count(x - 1)) {

                int length = 1;

                while (seen.count(x + 1)) {
                    x = x + 1;
                    length++;
                }

                ans = max(ans, length);
            }
        }

        return ans;
    }
};