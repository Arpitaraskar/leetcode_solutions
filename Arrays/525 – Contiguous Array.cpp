
class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();

        for(int i=0; i<n ; i++){

            int zerocount =0;
            int onecount =0;
            int ans=0;

            for(int j=i ; j<n; j++){

                if(nums[j]==0){
                    zerocount++;
                }else {
                    onecount++;
                }
                 if(zerocount == onecount){
                    int length = j-i +1;

                    ans=(ans,length);

                 }
            }
           
        }
         return ans;

    }

};