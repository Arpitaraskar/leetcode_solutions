class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        int ans =0;


        for(int i=0; i<nums.size(); i++){

            int count =0;

            for(int j=i; i<nums.size()-1; j++){

                if(nums[j]<nums[j+1]){
                    count++;
                }else{
                    break;
                }

               
                
                ans = max(ans,count);

            }
        }
        return ans;
    }
};