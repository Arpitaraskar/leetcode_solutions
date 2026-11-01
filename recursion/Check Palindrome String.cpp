class Solution{

    public:

    bool ispalindrome(string s,int left , int right){
           
          if (left >= right) {
            return true;
        }
       

        if(s[left] != s[right]){

          return false;
        }
        
       left++;
       right--;

        return ispalindrome(s,left ,right);


    }
}