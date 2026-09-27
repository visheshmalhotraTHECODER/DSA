class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9];
        unordered_set<char>col[9];
        unordered_set<char>box[9];

        for(int r= 0; r<9; r++){
            for(int c = 0; c<9; c++){
                if(board[r][c]=='.'){
                    continue;
                }
                char ch = board[r][c];

                int b = (r/3)*3 +(c/3);


                if(row[r].count(ch)||col[c].count(ch)||box[b].count(ch)){
                    return false;
                }
                row[r].insert(ch);
                col[c].insert(ch);
                box[b].insert(ch);
            }
        }
            return true;
        
    }
};