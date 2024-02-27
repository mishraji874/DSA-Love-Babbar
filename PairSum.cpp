#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{10,20,40,60,70};

    //print all pairs
    //outer loop will traverse for each element

    for(int i = 0; i < arr.size(); i++) {
        int element = arr[i];

        for(int j = i + 1; j < arr.size(); j++) {
            // cout << "(" << element << "," << arr[j] << ")" << endl;
        
            if(element + arr[j] == sum) {
                cout << "Pair found: " << element << "," << arr[j] << endl;
            }
        }
    }

    return 0;
}