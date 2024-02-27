#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int x) {
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if(arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
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
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found.";
    }
    return 0;
}