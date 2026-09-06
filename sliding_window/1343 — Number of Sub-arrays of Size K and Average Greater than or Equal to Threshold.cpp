class Solution{

    public :
      
     int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int sum =0;
        int count =0;

        for(int i =0; i<arr.size(); i++){
            sum += arr[i];
        }

        if(sum /k >= threshold){
           count++;
        }

        for(int right =k; right<arr.size(); right++){
              sum = sum - arr[right - k] + arr[right];

            if (sum / k >= threshold) {
             count++;
        }
        
    }

    return ans;

}

};