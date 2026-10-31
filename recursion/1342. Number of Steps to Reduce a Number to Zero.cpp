class Solution {
public:
    int numberOfSteps(int num) {

        // Base case
        if (num == 0) {
            return 0;
        }

        // If number is even
        if (num % 2 == 0) {
            return 1 + numberOfSteps(num / 2);
        }

        // If number is odd
        else {
            return 1 + numberOfSteps(num - 1);
        }
    }
};