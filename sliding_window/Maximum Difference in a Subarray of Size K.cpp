//Q. Find the minimum number of elements greater than 5 in any subarray of exactly k 
// consecutive elements.

class Solution{

    public:

    int maxSubarrayCount(vector<int>&nums,int k){

        int count =0;

      

        for(int i=0; i<k; i++){

            if(nums[i]>5){

                count++;
            }
        }


       int mincount = count;


      for(int right =k ; right <nums.size(); right++){

           if(nums[right-k]>5){
            count--;
           }

           if(nums[right]>5){
            count++;
           }

           mincount = min(mincount, count);
      }


      return mincount;
     
    }


};