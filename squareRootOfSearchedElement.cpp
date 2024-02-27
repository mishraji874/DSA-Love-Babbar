#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n) {
    int s = 0;
    int e = n;
    int mid = (s+e)/2;
    int ans = -1;

    while (s <= e)
    {
        if(mid * mid == n) {
            return mid;
        }
        else if(mid * mid < n) {
            ans = mid;
            s = mid + 1;
        }
        else if(mid * mid > n) {
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int ans = findSqrt(n);
    cout << "Ans is " << ans << endl;

    return 0;
}