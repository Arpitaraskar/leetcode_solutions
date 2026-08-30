class Solution{

    public:

      bool word(string pattern,string s){
         //pattern = abab
        //string s = dog,cat,dog,cat
        stingstream ss(s);
       string word;
       vector<string>words;

       while(ss >> word){
        words.push_back(word);
       }


       if(pattern.size() != words.size()){
        return false;
       }

       unordered_map<char,string>mp;
       unordered_map<string,char> reverse;

       for(int i =0; i<pattern.size(); i++){
        char letter = pattern[i];
        string currword=words[i];

        if(mp.find(letter) != mp.end()){
        

          if(mp[letter] != currword){
            return false;
          }
        }else{
          if(reverse.find(currword) != reverse.end()){
            return false;
          }
          mp[letter]=currword;
          reverse[currword]=letter;
        }
       }
return true;
        }



      };
