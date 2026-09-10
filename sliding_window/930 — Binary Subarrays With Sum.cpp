class Solution {
public:

    int maxsum(vector<int>&nums,int k){

        int sum=0;

        class Solution {
public:

    int maxsum(vector<int>&nums,int k){

        int sum=0;

        for(int i=0; i<k ; i++){

            sum+=nums[i];
        }

        int maxsum=sum;

        for(int right =k; right<nums.size(); right++){

            sum = sum- nums[right]+1;
        }

    }
};