class Solution{

    public:

    int MaximumSubarraySumofSizeK(vector<int>&nums, int k){

        int sum=0;

       for(int i=0; i<k; i++){

            sum+=nums[i];
        }

          int maxsum=sum;

        for(int right=k; right<nums.size(); right++){

            sum = sum-nums[right-k]+nums[right];

         maxsum=max(maxsum,sum);
        }

        return maxsum;
    }
};