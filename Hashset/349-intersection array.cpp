class Solution{

    public:

     int interSectionArray(vector<int>&nums1,vector<int>&nums2){

        uordered_set<int> seen;
        vector<int>ans;

        for(int i=0; i<nums1.size(); i++){

         seen.insert(nums1[i]) ; 
         
        }

        for(int i=0; i<nums2.size(); i++){

           if(seen.count(nums2[i]) && !added.count(nums2[i])){
            ans.push_back(nums2[i]);
               added.insert(nums2[i]);
           }
        }

       return ans;
     }


};