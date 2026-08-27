class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //create 9 sets for each 3x3 square of the board
        vector<vector<unordered_set<char>>> boxes(3,vector<unordered_set<char>>(3));

        vector<unordered_set<char>> horizontals(9),verticals(9);
        
        //loop through the board, chech the appropriate sets for the number
        for(int i = 0;i< board.size();++i){
            for(int j=0; j<board[i].size();++j){
                if(board[i][j]=='.'){
                    continue;
                }
                
                char num = board[i][j];

                // since int/int = int this maps the board indices to boxes. e.g 2/3 = 0, 5/3 =1 etc.
                int index_i = i/3;
                int index_j = j/3;

                if(boxes[index_i][index_j].count(num)){
                    return false;
                }

                boxes[index_i][index_j].insert(board[i][j]);
                
                if (horizontals[i].count(num)){
                    return false;
                }

                horizontals[i].insert(num);

                if (verticals[j].count(num)){
                    return false;
                }
                
                verticals[j].insert(num);

            }
        }
        return true;
    }
};
