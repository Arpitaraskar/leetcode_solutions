class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = 0;

        for (int w : weights) {
            right += w;
        }

        while (left < right) {
            int mid = left + (right - left) / 2;
            int total_days = 1;
            int current_load = 0;

            for (int w : weights) {
                if (current_load + w > mid) {
                    total_days++;
                    current_load = 0;
                }
                current_load += w;
            }

            if (total_days <= days) {
                right = mid;       // Capacity works; try smaller
            } else {
                left = mid + 1;    // Too small; increase capacity
            }
        }

        return left;
    }
};
