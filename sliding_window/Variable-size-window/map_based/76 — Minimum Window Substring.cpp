class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> mp1; // frequency needed from t
        unordered_map<char, int> mp2; // frequency in current window

        // Store frequency of characters in t
        for(char c : t) {
            mp1[c]++;
        }

        int left = 0;
        int count = 0;

        int minLength = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            mp2[s[right]]++;

            // Required character is completely satisfied
            if(mp1.count(s[right]) &&
               mp2[s[right]] == mp1[s[right]]) {
                count++;
            }

            // All required character types are present
            while(count == mp1.size()) {

                int length = right - left + 1;

                // Keep the smallest valid window
                if(length < minLength) {
                    minLength = length;
                    start = left;
                }

                // Remove left character
                mp2[s[left]]--;

                // We lost a required character
                if(mp1.count(s[left]) &&
                   mp2[s[left]] < mp1[s[left]]) {
                    count--;
                }

                left++;
            }
        }

        // No valid window found
        if(minLength == INT_MAX) {
            return "";
        }

        return s.substr(start, minLength);
    }
};