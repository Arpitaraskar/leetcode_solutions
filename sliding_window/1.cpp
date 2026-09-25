class Solution{

    public:

    int subarray(vector<int>nums){

        int left=0 ;
        int sum=0;
        int ans =INT_MAX;
       
 for(int right =0; right<nums.size(); right++){

    sum+=nums[right];


    while(sum >= 7){

       sum-=nums[left];

    int  length = right - left + 1;

      left++;

      ans = min(ans,length);
    }

    
 }
 return ans;

}
};