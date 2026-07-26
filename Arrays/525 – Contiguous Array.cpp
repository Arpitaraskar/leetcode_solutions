//bruth-force
// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {

//         int n = nums.size();

//         for(int i=0; i<n ; i++){

//             int zerocount =0;
//             int onecount =0;
//             int ans=0;

//             for(int j=i ; j<n; j++){

//                 if(nums[j]==0){
//                     zerocount++;
//                 }else {
//                     onecount++;
//                 }
//                  if(zerocount == onecount){
//                     int length = j-i +1;

//                     ans=(ans,length);

//                  }
//             }
           
//         }
//          return ans;

//     }

// };

class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int, int> mp;

        mp[0] = -1;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                sum += -1;
            else
                sum += 1;

            if (mp.find(sum) != mp.end()) {

                ans = max(ans, i - mp[sum]);

            } else {

                mp[sum] = i;

            }
        }

        return ans;
    }
};