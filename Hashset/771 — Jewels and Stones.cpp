class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char>jewelset;

        int count=0;

       for(char x :jewels ){

        jewelset.insert(x);

       }

       for(char x : stones){

        if(jewelset.count(x)){

            count++;

        }
       }
        return count;
      


        
    }
};