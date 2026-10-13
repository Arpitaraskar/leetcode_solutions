class Solution {
public:
    int findPeakElement(vector<int>& nums) {


        for(int i=0; i<nums.size(); i++){

            if(nums[i] > nums[i-1] && nums[i]>nums[i+1]){
                return i;
            }
        }
        
    }
};