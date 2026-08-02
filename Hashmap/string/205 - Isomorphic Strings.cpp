class Solution{

    public:

    bool isomorphic(string s, string t){

        unordered_map<char, char> mp1;
        unordered_map<char,char> mp2;

         if(s.length()!= t.length()){
            return false;
        }


        for(int i =0; i<s.length(); i++){
            
        if(mp.find(s[i]) != mp.end()){
       
        if(mp[s[i]] != t[i]){

            return false;

        }

       }else{
              mp[s[i]] = t[i];
        }


        }
return true;

       
        
    }
};