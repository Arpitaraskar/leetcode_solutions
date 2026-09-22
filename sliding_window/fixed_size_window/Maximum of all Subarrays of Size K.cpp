class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;

        for(int start = 0; start <= nums.size() - k; start++) {

            int maxValue = INT_MIN;

            // find max in current window
            for(int j = start; j < start + k; j++) {
                maxValue = max(maxValue, nums[j]);
            }

            ans.push_back(maxValue);
        }

        return ans;
    }
};

// o(n * k)

// 1. Do I need to find MAX or MIN in a sliding window?
// 2. Do I need the answer for EVERY window position?
// 3. Is the simple approach too slow? 
//yes - used dequeue