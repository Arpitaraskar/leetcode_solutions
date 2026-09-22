class Solution {
public:
    int CountAnagrams(string pattern, string text) {

       

        unordered_map<char,int> mp;
         unordered_map<char, int> window; 

       for(int i=0; i<pattern.size(); i++){

        mp[pattern[i]]++;

       }

       int k = pattern.size();
       int count =0;

       for(int i=0; i<k ; i++){
        window[text[i]]++''
       }

       if(window == mp){
        count++;
       }
     
       for(int right =k ; right< text.size(); right++){

        window[text[right-k]]--;

        if(window == mp){
            count++;
        }
       }

       return count;

    }
};