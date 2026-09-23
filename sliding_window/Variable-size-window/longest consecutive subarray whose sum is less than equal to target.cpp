//Find the longest consecutive subarray whose sum is <= target.

class Solution{

    public:

    int subarray(vector<int>nums){

        int left=0 ;
        int sum=0;
        int ans =0;
       
        for(int right =0; right<nums.size(); right++){
            sum+= nums[right];

            while(sum >= 5){

          sum-=nums[left];

             left++;

            }

             int length = right - left + 1;
            ans = max(ans, length);


        }
     
        return ans;

    }
    

};

