class Solution{

    public:

    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();

       int preffix_sum =0;

       

        for(int i =0; i<n; i++){

             preffix_sum =preffix_sum+nums[i];


              nums[i] = prefix_sum;
        }


       return nums;
        
        
    }
};
