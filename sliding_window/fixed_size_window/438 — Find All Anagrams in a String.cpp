class Solution{

    public:

    vector<int>findAnagrams(string s, string p){


        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int left =0;
        vector<int>ans;

        for(int i=0; i<p.size(); i++){

            mp1[p[i]]++;
        }

        for(int right=0; right<s.size(); right++){

            mp2[s[right]]++;

            int length = right - left +1;

            if(length == p.size() ){

                
            if(mp1 == mp2){

           ans.push_back(s[left]);

            }
           
                mp2[s[left]]--;
            

            if(mp2[s[left]] == 0){
             mp2.erase(left);
            }
            left++;

            }

        }
        return ans;
    }

};