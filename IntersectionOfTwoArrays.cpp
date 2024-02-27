#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr(1,3,5,7,9);
    vector<int> brr{2,4,6,8};

    vector<int> ans;

    //outer loop on arr vector
    for(int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        //for every element run loop on brr
        for(int j = 0; j < brr.size(); j++) {
            if(element == brr[j]) {
                ans.push_back(element);
            }
        }
    }

    //print ans
    for(auto i: ans) {
        cout << i << " ";
    }

    return 0;
}