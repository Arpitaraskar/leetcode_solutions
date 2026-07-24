class Solution{

    public:
    
    int subarray(vector<int>&nums){
      unordered_map<int,int>mp;
        int n = nums.size();
        int target = 2;
       int prefixsum =0;
       
        mp[0] = 1;
        int count =0;
        
        for ( int i =0 ; i<n; i++){

    prefixsum +=nums[i];

       int k = prefixsum  - target;

       if(mp.find(k)!= mp.end()){
       count += mp[k];
       }

          mp[prefixsum]++;  

    }

    return count;
}
};