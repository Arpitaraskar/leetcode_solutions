class Solution{
    public :
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int count = 0;

        // Calculate sum of FIRST k elements
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }

        // Check first window
        if(sum / k >= threshold){
            count++;
        }

        // Slide the window
        for(int right = k; right < arr.size(); right++){
            sum = sum - arr[right - k] + arr[right];

            if(sum / k >= threshold){
                count++;
            }
        }

        return count;
    }
};