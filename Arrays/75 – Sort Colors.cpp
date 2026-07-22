// Pattern: Three Pointers (Dutch National Flag Algorithm)

#include<stdio.h>
using namespace std;

class Soution{

    void sortColor(vector<int>& nums){

        int n = nums.size();

        int low =0;
        int mid =0;
        high = n-1;

        while(mid<= high){

           if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
 } else if(nums[mid]==1){
    mid++;
}else{
    swap(nums[mid],nums[high]);
    high--;
}

}
    }

};