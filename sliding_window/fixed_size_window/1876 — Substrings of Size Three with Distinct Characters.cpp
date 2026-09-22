class Solution{

    public:

    int  countGoodSubstrings(string s){

        int count=0;

        int x=s[0];
        int y=s[1];
        int z=s[2];

 if(x != y && y!=z && z!=x){
                count++;
            }


  for(int i=3 ; i<s.size(); i++){


            x = y;       // old second becomes first
            y = z;       // old third becomes second
            z = s[i];    // new character enters

            
          if(x != y && y!=z && z!=x){
                count++;
            }

            }

            return count;

        
    }

       

};

