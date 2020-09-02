bool FindUnassignedLocation(vector<vector<char>>A,int &row,int &column,int N)
{
    for( row=0;row<N;row++)
    {
        for( column=0;column<N;column++)
        {
            if(A[row][column] == '.')
            return true;
        }
    }
    return false;
}
bool UsedInRow(vector<vector<char>>grid,int row,int col,int N,char num)
{
    for (int col = 0; col < N; col++)
        if(grid[row][col] == num)
            return true;
    return false;
}
bool UsedInCol(vector<vector<char>>grid,int row,int col,int N,char num)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool UsedInBox(vector<vector<char>>grid, int boxStartRow,int boxStartCol, char num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow] [col + boxStartCol] == num)
                return true;
    return false;
}
bool isSafe(vector<vector<char>>A,int row,int column,int N,char num)
{
    bool t1 = A[row][column] == '.';
    bool t2 = !UsedInRow(A,row,column,N,num);
    bool t3 = !UsedInCol(A,row,column,N,num) ;
    bool t4 = !UsedInBox(A,row - row%3,column-column%3,num); // 3 for column and row division

    return t1 && t2 && t3 && t4;
}
bool Sudoku(vector<vector<char>> &A,int N)
{
    int row;
    int column;
    if(!FindUnassignedLocation(A,row,column,N))
        return true;
    for(char num='1';num <= '9';num++)
    {
        if(isSafe(A,row,column,N,num))
        {
            A[row][column] = num;
            if (Sudoku(A,N))
                return true;
            A[row][column] = '.';
        }
    }
    return false;
}

void Solution::solveSudoku(vector<vector<char> > &A) 
{
    int N = A.size();
    
    Sudoku(A,N);
    return;
}
