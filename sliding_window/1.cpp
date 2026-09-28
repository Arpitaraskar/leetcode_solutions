class Solution {
public:
    int numOfSubarrays(vector<int>&nums, int k,int threshold) {

    int avg;
    int sum =0;
    int count=0;
   

   for(int i=0; i<k; i++){

    sum+=nums[i];

   }


   for(int right =k ; right <nums.size(); right++){

    sum= sum-nums[right -k]+nums[right];


    avg = sum /k;

    if(avg >=threshold){

        count++;

    }

 

}

return count;


        
    }
};