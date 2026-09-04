class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> mp;

        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            // Add current character
            mp[s[right]]++;

            // Highest frequency character in current window
            maxFreq = max(maxFreq, mp[s[right]]);

            // Characters that need to be replaced
            while ((right - left + 1) - maxFreq > k) {
                mp[s[left]]--;
                left++;
            }

            // Current window is valid
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};