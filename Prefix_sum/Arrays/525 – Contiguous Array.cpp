class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int, int> mp;

        // prefix sum 0 exists before the array starts
        mp[0] = -1;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            // 0 → -1, 1 → +1
            if (nums[i] == 0) {
                sum += -1;
            } else {
                sum += 1;
            }

            // Same prefix sum appeared before
            if (mp.find(sum) != mp.end()) {

                int length = i - mp[sum];

                ans = max(ans, length);

            } else {

                // Store ONLY the first/earliest index
                mp[sum] = i;
            }
        }

        return ans;
    }
};