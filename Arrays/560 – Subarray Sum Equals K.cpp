class Solution{

    public:
    
    int subarray(vector<int>&nums){
      unordered_map<int,int> mp;
        int n = nums.size();
       int prefixsum =0;
        int target =2;
        
        

       for ( int i =0 ; i<n; i++){

    prefixsum +=nums[i];

       int k = prefixsum  - target;

       if(prefixsum == target){
        k[mp]++;
       }

        

    }

    return mp;
}
};