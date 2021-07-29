#include<bits/stdc++.h>
using namespace std;

bool Row(vector<vector<char>>& board , int row)
    {
        set<char> unique;
        for(int i=0;i<9;i++)
        {
            if(unique.find(board[row][i]) != unique.end())
                return false;
            if(board[row][i] != '.') 
               unique.insert(board[row][i]);
            
        }
        return true;
    }
    
    bool Col(vector<vector<char>>& board , int col)
    {
        set<char> unique;
        for(int i=0;i<9;i++)
        {
           if(unique.find(board[col][i]) != unique.end())
                return false;
           if(board[col][i] != '.') 
               unique.insert(board[col][i]);
            
        }
        return true;
    }
    
    bool Box(vector<vector<char>>& board , int row , int col)
    {
        set<char> unique;
        for(int i=0;i<3;i++)
        {
           for(int j=0;j<3;j++)
           {
               if(unique.find(board[i+row][j+col]) != unique.end())
                    return false;
               if(board[i+row][j+col] != '.') 
                   unique.insert(board[i+row][j+col]);
           }
        }
        return true;
    }
    
    bool isvalid(vector<vector<char>>& board , int row , int col)
    {
        return Row(board,row) && Col(board,col) && Box(board,(row - row%3),(col - col%3));
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(!isvalid(board,i,j))
                    return false;
            }
        }
        return true;
    }

    int main()
    {
        int n=9;
        vector<vector<char>> board(n,vector<char> (n));
        cout<<"Enter Sudoku : \n";
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cin>>board[i][j];
            }
        }
        cout<<isValidSudoku(board);
        return 0;
    }