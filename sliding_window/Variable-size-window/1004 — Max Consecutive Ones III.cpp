class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int count = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Add the new element
            if (nums[right] == 0) {
                count++;
            }

            // Too many zeros → shrink window
            while (count > k) {
                if (nums[left] == 0) {
                    count--;
                }
                left++;
            }

            // Current window is valid
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};