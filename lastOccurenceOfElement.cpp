#include <bits/stdc++.h>
using namespace std;

int lastOccurence(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size() - 1;

    int mid = (s + e)/2;
    int ans = -1;

    while (s <= e)
    {
        if(arr[mid] == target) {
            //ans store kro aurr right jao
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > target) {
            e = mid - 1;
        }
        else if(arr[mid] < target) {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
    int target = 7;

    int ans = lastOccurence(v, target);
    cout << "ans is " << ans << endl;

    return 0;
}