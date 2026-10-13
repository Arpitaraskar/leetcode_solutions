class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();


        int left =0;
        //row =2 and col=3 so 3*2=6 total elemant =6
        int right = rows * cols -1;

        while(left <= right){

            int mid = left +(right-left)/2;

            //convert 2d array to 1 D

            int row=mid/cols;
            int col = mid % cols;

            if(matrix[row][col] == target){
                return true;
            }else if(matrix[row][col] < target){
                left = mid+1;
            }else{
                right = mid -1;
            }
        }

        return false;



    }
};