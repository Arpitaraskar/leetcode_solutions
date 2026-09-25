class Solution{

    public:

     int findMaxConsecutiveOnes(vector<int>& nums) {

        int count=0;
        int ans=0;


        for(int i=0; i<nums.size(); i++){

            count=0;

            for(int j=i; i<nums.size(); j++){

                if(nums[j] == 1){

                    count++;

                }

                if(nums[j] == 0){
                    break;
                }

                ans = max(ans,count);
            }
        }

        return ans;
        
    }


};

https://leetcode.com/discuss/post/7344963/10-sliding-window-patterns-for-coding-in-pokf/