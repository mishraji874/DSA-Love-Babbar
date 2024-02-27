#include <iostream>
using namespace std;

//linear search in 2d array

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            if(arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum

void printRowSum(int arr[][4], int row, int col) {
    cout << "Printing sum of rows" << endl;
    for(int row = 0; row < 3; row++) {
        int sum = 0;
        for(int col = 0; col < 4; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

//to print column wise sum

void printColSum(int arr[][4], int row, int col) {
    cout << "Printing sum of column: " << endl;
    for(int col = 0; col < 3; col++) {
        int sum = 0;
        for(int row = 0; row < 4; row++) {
            sum += arr[col][row];
        }
        cout << sum << " ";
    }
}

//largest row sum

int largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++) {
        int sum = 0;
        for(int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
        
        cout << "the maximum sum is: " << maxi << endl;

        return rowIndex;
    }
}

int transpose(int arr[][3], int row, int col, int transposeArr[][3]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

int main()
{
    int arr[3][4];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    //printed
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}