class Solution{

    public:

    bool checkInclusion(string s1, string s2) {

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int left=0;

        int k = s1.length();

        for(int i=0; i<k; i++){

            mp1[s1[i]]++;

        }

        for(int right =0; right<s2.length(); right++){

          mp2[s2[right]]++;

         int length = right -left +1;

          if(length == k){
          
            if(mp1 == mp2){

               return true;
            }else{
                  mp2[s2[left]]--;
            }
          
            if(s2[left]==0){
                mp2.erase(s2[left]);
            }
          

            left++;
          }


        }

       
     return false;
        
    }

};