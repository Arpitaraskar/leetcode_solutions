#include<stdio.h>
using namespace std;

class Solution{

    public:

    int Trap(vector<int>&nums){

        int n=nums.size();

        int leftmax=1;
        int rightmax=n-1;

 for(int i=0; i<n ; i++){

    int height =min(leftmax, rightmax)-nums[i];
  

 }

    

}