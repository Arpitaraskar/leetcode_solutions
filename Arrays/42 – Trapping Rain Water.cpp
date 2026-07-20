#include<stdio.h>
using namespace std;

class Solution{

    public:

int Trap(vector<int>&nums){

        int n=nums.size();
        int ans=0;

        for(int i=0; i<n ; i++){
            int leftmax = 0;
              int rightmax=0;

            for(int j =0; j<i; j++){

                leftmax = max(leftmax, nums[j]);
            }

            for(int j =i; j <n; j++){
              

                rightmax = max(rightmax,nums[j]);


            }

            ans += min(leftmax , rightmax)-nums[i];
        }

        return ans;

       

}
}; 