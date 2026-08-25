class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int i = 0; i < 9; i++) {

            for (int j = 0; j < 9; j++) {

                char num = board[i][j];

                if (num == '.') {
                    continue;
                }

                // Row
                if (rows[i].count(num)) {
                    return false;
                }
                rows[i].insert(num);

                // Column
                if (cols[j].count(num)) {
                    return false;
                }
                cols[j].insert(num);

                // 3 x 3 box
                int box = (i / 3) * 3 + (j / 3);

                if (boxes[box].count(num)) {
                    return false;
                }
                boxes[box].insert(num);
            }
        }

        return true;
    }
};