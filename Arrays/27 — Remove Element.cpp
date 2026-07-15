

class Solution{

    public:

    int RemoveElement(vector<int>&nums, int val){

        int n= nums.size();

        int slow=0;

        for(int i=0; i<n; i++){

            if(nums[i]!=val){

                nums[slow]=nums[i];
                slow++;



            }

         
        }

        return slow;

    }


};