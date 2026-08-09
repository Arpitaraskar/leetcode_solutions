//it can be also solved using sliding window

//Hashmap solution->

class Solution{

    public:

      bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        for(int i =0; i<nums.size(); i++){

           if(mp.find(nums[i])!= mp.end()){

            int prev_idx=mp[nums[i]];
            int curr_idx =i;

            int distance = i - prev_idx;

            if(distance <= k){
             return true;

            }

             mp[nums[i]]=i;
            
            
         } else{

             mp[nums[i]]=i;
               
            }

           


           }

           return false;

}

  


      };

