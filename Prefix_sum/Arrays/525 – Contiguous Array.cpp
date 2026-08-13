class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int answer = 0;

        for (int i = 0; i < n; i++) {

            int zeroCount = 0;
            int oneCount = 0;

            for (int j = i; j < n; j++) {

                if (nums[j] == 0) {
                    zeroCount++;
                } else {
                    oneCount++;
                }

                if (zeroCount == oneCount) {
                    int length = j - i + 1;
                    answer = max(answer, length);
                }
            }
        }

        return answer;
    }
};