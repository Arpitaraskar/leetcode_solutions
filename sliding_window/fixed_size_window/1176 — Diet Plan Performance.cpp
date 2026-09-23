class Solution {

public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {

        int sum =0;
        int score = 0;

        for(int i=0; i<k; i++){

            sum+=calories[i];
        }

        if(sum < lower){

            score--;

        }else if(sum>upper){

         score++;

        }

        for(int right =k ; right < calories.size();  right++){

            sum = sum - calories[right-k]+calories[right];


          if(sum < lower){
        score--;
           }
        else if(sum > upper){
                    score++;
    }
        }

        return score;



    }
};