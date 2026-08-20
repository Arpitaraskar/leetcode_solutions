class Solution
{

public:

int subarray(vector<int>&nums,int target){

   int prefix_sum =0;
   int count =0;

   unordered_map<int,int>mp;

    mp[0] =1;

   for(int i=0; i<nums.size(); i++){
      prefix_sum += nums[i];

      if(mp.find(need)!= mp.end()){
         count+=mp[need];
      }

      mp[prefix_sum]++;
   }
   
   return count;
}
};


