#include <bits/stdc++.h>
using namespace std;

bool isSafe(int srcx, int srcy, int row, int col, int arr[3][3], vector<vector<bool>> &visited) {
    if(((srcx >= 0 && srcx < row) && (srcy >= 0 && srcy < col)) && (arr[srcx][srcy] == 1) && (visited[srcx][srcy] == false)) {
        return true;
    }
    else {
        return false;
    }
}

void solveMaze(int arr[3][3], int row, int col, int srcx, int srcy, vector<vector<bool>> &visited, vector<string>& path, string output) {
    //base case
    if(srcx == row - 1 && srcy == col - 1) {
        //ans mil gaya
        path.push_back(output);
        return;
    }

    // Down -> srcx + 1, srcy
    if(isSafe(srcx+1, srcy, row, col, arr, visited)) {
        visited[srcx+1][srcy] = true;
        solveMaze(arr, row, col, srcx+1, srcy, visited, path, output + 'D');
        //backtrack
        visited[srcx+1][srcy] = false;
    }

    //Left -> srcx, srcy - 1
    if(isSafe(srcx, srcy-1, row, col, arr, visited)) {
        visited[srcx][srcy-1] = true;
        solveMaze(arr, row, col, srcx, srcy-1, visited, path, output + 'L');
        //backtrack
        visited[srcx][srcy-1] = false;
    }

    //Right -> srcx, srcy + 1
    if(isSafe(srcx, srcy+1, row, col, arr, visited)) {
        visited[srcx][srcy+1] = true;
        solveMaze(arr, row, col, srcx, srcy+1, visited, path, output + 'R');
        //backtrack
        visited[srcx][srcy+1] = false;
    }

    //Up -> srcx - 1, srcy
    if(isSafe(srcx-1, srcy, row, col, arr, visited)) {
        visited[srcx-1][srcy] = true;
        solveMaze(arr, row, col, srcx-1, srcy, visited, path, output + 'U');
        //backtrack
        visited[srcx-1][srcy] = false;
    }
}

int main() {

    int arr[3][3] = {{1,0,0}, {1,1,0}, {1,1,1}};
    int row = 3;
    int col = 3;

    if(arr[0][0] == 0) {
        cout << "No path exists" << endl;
    }

    vector<vector<bool> >visited(row, vector<bool>(col, false));
    visited[0][0] = false;

    vector<string> path;
    string output = "";

    solveMaze(arr, row, col, 0, 0, visited, path, output);

    cout << "Printing the results: " << endl;
    for(auto i:path) {
        cout << i << " ";
    }
    cout << endl;

    if(path.size() == 0) {
        cout << "No path exists" << endl;
    }

    return 0;
}