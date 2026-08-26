class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_set<int>seen;

        for(int i =0; i<nums.size(); i++){

            if(seen.count(nums[i])){
                seen.erase(nums[i]);
            }else{
                seen.insert(nums[i]);
            }
        }

         //return {} inside the seen set ,derefrence operator
        return *seen.begin();
        
    }
};