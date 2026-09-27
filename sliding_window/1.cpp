class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int>mp;
        int maxFreq=0;
        int left =0;
        int ans =0;


        for(int right =0; right<s.size(); right++){

            mp[s[right]]++;

        maxFreq=max(maxFreq,mp[s[right]]);


        int length = right -left +1;

        int replacement = length - maxFreq;

        while(replacement > k){

            mp[s[left]]--;
            left++;

            length = right-left+1;
            replacement=length-maxFreq;
        }

        ans = max(ans,length);


        }
  return ans;


        
    }
};