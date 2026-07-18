#include<stdio.h>
using namespace std;

class Solution{

    public:

    vector<int>SortedArray(vector<int>&nums){

         int n= nums.size();

        vector<int> ans(n);

        int left=0;
        int right= n-1;
        int k = n-1;

        while(left<=right){

          int leftsquare= nums[left]*nums[left];
           int rightsquare=  nums[right]*nums[right];

            if(leftsquare>rightsquare){

                ans[k]=leftsquare;

                left++;
                k--;
            }else {
                ans[k]=rightsquare;
                right--;
                k--;

            }


        }

        return ans;

    }
};