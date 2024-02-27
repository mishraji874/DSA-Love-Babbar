#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be searched in the array: ";
    cin>>x;
    int result = linearSearch(arr, n, x);
    if(result == -1) {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found.";
    }
    return 0;
}