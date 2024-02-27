#include <bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<char>> board, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
    //check karna hai ki queen yaha pe rakh sakte hai ya nahi
    int i = row;
    int j = col;

    //check row
    while(j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        j--;
    }

    //check upper left diagonal
    i = row;
    j = col;
    while(i >= 0 && j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--;
    }

    //check bottom left diagonal
    i = row;
    j = col;
    while(i < n && j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i++;
        j--;
    }

    //kahi par bhi queen nahi mili
    //iska matlab sab safe hai
    return true;

}

void solve(vector<vector<char>> &board, int col, int n) {
    if(col >= n) {
        printSolution(board, n);
        return;
    }

    //ek case solve
    for(int row = 0; row < n; row++) {
        if(isSafe(row, col, board, n)) {
            //rakh do
            board[row][col] = 'Q';
            //recursion
            solve(board, col + 1, n);
            //backtrack
            board[row][col] = '-';
        }
    }
}

int main() {

    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);

    return 0;
}