class Solution {
public:

    int countGoodSubstrings(string s) {

           if (s.size() < 3) {
            return 0;
        }

        int count = 0;

        for (int i = 0; i <= s.size() - 3; i++) {

            string sub = s.substr(i, 3);

            // check if sub has 3 different characters

            if(sub[0] != sub[1] && sub[1]!=sub[2] && sub[0] != sub[2]){

                count++;

            }

        }

        return count;
    }
};