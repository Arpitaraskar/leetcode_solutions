class Solution {
public:
    int countDigits(int n) {
        if (n == 0) return 0;

        return 1 + countDigits(n / 10);
    }

    int findNumbers(vector<int>& nums) {

        return helper(nums, nums.size());
    }

    int helper(vector<int>& nums, int n) {
        if (n == 0) return 0;

        int digits = countDigits(nums[n - 1]);

        if (digits % 2 == 0) {
            return 1 + helper(nums, n - 1);
        }

        return helper(nums, n - 1);
    }
};