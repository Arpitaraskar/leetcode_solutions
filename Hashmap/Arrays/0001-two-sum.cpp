

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;   // number -> index

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            // Check if we've already seen the complement
            if (mp.find(complement) != mp.end()) {

                ans.push_back(mp[complement]); // previous index
                ans.push_back(i);              // current index

                return ans;
            }

            // Store current number and its index
            mp[nums[i]] = i;
        }

        return {};
    }
};