class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {

        int n = arr.size();

        int left =0;
        int right =n-1;
        int ans =0;

        while(left < n-1 && arr[left]<=arr[left+1]){
            left++;

        }

        if( left == n-1){
            return 0;
        }

        while(right > 0 && arr[right-1] <= arr[right]){
            right--;
        }
        
         ans = n-left-1;

        ans = min(ans,right);

        int i=0;
        int j = right;


        while(i<= left && j<n){
            
            if(arr[i] <= arr[j]){
                ans = min(ans,j-i-1);
                i++;
            }else{
                j++;
            }
        }

        return ans;
    }
};