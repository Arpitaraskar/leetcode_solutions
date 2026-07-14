class Solution{

    public:

    void moveZero(vector<int>&nums){

     
         int n= nums.size();

         int slow=0;

         for(int i=0 ; i<n; i++){

            if(nums[i]!= 0){
               

                nums[slow]=nums[i];
                 slow++;

            }
        }

            for(int j=slow ; j<n-1; j++){
                 nums[j] = 0;
            }

        
         
    }


};