#include<stdio.h>
using namespace std;

class solution{

    public:

    class Solution{

        vector<int> parity(vector<int>&nums){

            int n= nums.size();

            int left=0;
            int right=n-1;

            while(left<right){

                if(nums[left]%2==0){
                    left++;
          }else if(nums[right]%2!=0){
            right--;
          }else{
            swap(nums[left],nums[right]);
            left++;
            right--;
          }
        }

        return nums;
    }


}

};