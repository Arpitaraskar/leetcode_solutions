class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int left = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++) {

            mp[s[right]]++;

            while(mp[s[right]] > 1) {
                mp[s[left]]--;
                left++;
            }

            int length = right - left + 1;

            ans = max(ans, length);
        }

        return ans;
    }
};