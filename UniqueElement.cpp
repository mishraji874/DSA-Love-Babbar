#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    vector<int> arr;
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique Element is: " << uniqueElement << endl;

    return 0;
}