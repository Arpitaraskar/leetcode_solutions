class Solution{

    public:

    int MaxSizeofK(vector<int>&nums,int k){

        int count =0;
        int ans=0;

        for(int i=0; i<k; i++){

            if(nums[i]==1){
                count++;
            }
        }
         
        ans = count;
        //slide the window

        for(int right =k; right <nums.size(); right++){

            if(nums[right-k] ==1){
                count--;
            }

                if (nums[right] == 1) {
                count++;
            }


         ans=max(ans,count);

        }

        return ans;
    }
};