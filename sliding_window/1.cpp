

class Solution{

    public:

    int Subarray(vector<int>&nums, int k){

        int sum =0;
      
        int ans=0;
        
        for(int i=0; i<k; i++){
       sum = nums[i] + nums[i + k - 1];

      

         
 }

 int maxsum=sum;

  for(int right =k; right<nums.size(); right++){

   sum = nums[right] + nums[right + k - 1];

 

     ans = max(maxsum,sum);



        }

        return ans;
         
  

    }
};