class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char>jewelset;

        int count=0;

          // insert every jewel into the set

       for(char x :jewels ){

        jewelset.insert(x);

       }

          // Check every stone
       for(char x : stones){

        // If the stone is a jewel

        if(jewelset.count(x)){

            count++;

        }
       }
        return count;
      


        
    }
};