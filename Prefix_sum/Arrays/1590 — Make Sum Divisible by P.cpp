class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        int total = 0;

        // 1. Find total sum
        for (int x : nums) {
            total += x;
        }

        // Remainder we need to remove
        int target = total % p;

        // Already divisible
        if (target == 0) {
            return 0;
        }

        unordered_map<int, int> mp;

        // remainder 0 exists before the array
        mp[0] = -1;

        int prefix = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {

            prefix += nums[i];

            int rem = prefix % p;

            // Remainder we need from the previous prefix
            int need = (rem - target + p) % p;

            if (mp.find(need) != mp.end()) {

                int length = i - mp[need];

                ans = min(ans, length);
            }

            // Store the latest index
            mp[rem] = i;
        }

        if (ans == nums.size()) {
            return -1;
        }

        return ans;
    }
};