// Q. Find The longest continuous part of the array whose sum is exactly k.

class Solution{

    public:

    int MaximumSizeSubArraySum(vector<int>&nums,int k){

        unordered_map<int,int>mp;

        int ans=0;
          int sum=0;
          mp[0]=1;
          int count =0

        for(int i=0; i<nums.size(); i++){

          sum+=nums[i];
            int need = sum - k;

          if(mp.find(sum)!=mp.end()){

        int length = currentIndex - previousIndex



          }

                
            }


        
        return ans;

    }
};