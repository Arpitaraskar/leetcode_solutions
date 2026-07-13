class Solution{

    public:

   int maxArea(vector<int>& h){


     int n = h.size();

        int left =0 , right = n-1;

          int ans=0;

        while(left < right ){

          int height = min(h[right],h[left]);

            int width = right-left;

            int Area = height * width;

            ans = max(ans, Area);

            if(h[left]<h[right]){
                left++;

            }else{
                right--;
            }
        }

        return ans;
    }
    

};