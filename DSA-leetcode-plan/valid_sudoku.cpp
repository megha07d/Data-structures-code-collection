class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        //find num of columns n rows in sudoku
        int R = board.size();
        int C = board[0].size();
        
        //array of unoreders maps : 
        //each map helps in finding duplicate of one row
        
        //each row has a map
        //each column has a map
        //each box has a map
        unordered_map <char,int>rows[9];
        unordered_map <char,int>columns[9];
        unordered_map <char,int>cells[9];
        
        
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
            {
                char ch = board[i][j];
                
                if(ch!='.' && (rows[i][ch]++>0 || columns[j][ch]++>0 ||  cells[i/3*3+j/3][ch]++>0))
                   {
                       return false;
                   }
            }
        
        
        return true;
    }
};

//can do with one map - more efficeient 
//try it out @https://www.youtube.com/watch?v=ADAq2TBP5PY&t=214s
