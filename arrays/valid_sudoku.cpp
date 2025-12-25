// Problem 36: Valid Sudoku
// Approach: Hashing / Set for rows, columns, and 3x3 boxes
// Time Complexity: O(9*9)
// Space Complexity: O(9*9)


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9),col(9),box(9);
        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                int val=board[r][c];
                if(val=='.') continue;
                if(row[r].count(val)) return false;
                row[r].insert(val);

                if(col[c].count(val)) return false;
                col[c].insert(val);

                int i=(r/3)*3+(c/3);
                if(box[i].count(val)) return false;
                box[i].insert(val);
            }
        }
        return true;
    }
};
