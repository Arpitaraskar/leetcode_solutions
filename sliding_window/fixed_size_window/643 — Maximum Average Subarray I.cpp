class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0;
        double avg;
        double maxavg;

        // First window
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        avg = (double)sum / k;
        maxavg = avg;

        // Slide window
        for(int right = k; right < nums.size(); right++) {

            sum = sum - nums[right-k] + nums[right];

            avg = (double)sum / k;

            maxavg = max(maxavg, avg);
        }

        return maxavg;
    }
};