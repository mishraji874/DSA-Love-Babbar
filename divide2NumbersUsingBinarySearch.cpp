#include <bits/stdc++.h>
using namespace std;

int solve(int dividend, int divisor) {
    int s = 0;
    int e = dividend;

    int ans = 0;
    int mid = (s+e)/2;

    while (s <= e)
    {
        if (mid  * divisor == dividend)
        {
            return mid ;
        }
        else if(mid * divisor < dividend) {
            ans = mid;
            s = mid + 1;
        }
        else if(mid * divisor > dividend) {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout << "Ans is " << ans << endl;

    return 0;
}