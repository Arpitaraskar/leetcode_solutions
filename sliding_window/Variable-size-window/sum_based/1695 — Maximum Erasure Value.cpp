class Solution{

    public:

    int maximumUniqueSubarray(vector<int>& nums) {

        int left =0;
        int sum =0;
        int ans=0;

        unordered_set<int>seen;


        for(int right =0; right < nums.size(); right++){

          
          while(seen.count(nums[right])){
            sum-=nums[left];
             seen.erase(nums[left]);
            left++;
          }

           sum+=nums[right];

          seen.insert(nums[right]);

         

          ans= max(ans, sum);

        }
        
        return ans;
    }
};