#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    if(size == 0) {
        return false;
    }
    if(arr[0] == key) {
        return true;
    } else {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;
    bool ans = linearSearch(arr, size, key);

    if(ans) {
        cout << "element found";
    } else {
        cout << "element not found";
    }
    return 0;
}