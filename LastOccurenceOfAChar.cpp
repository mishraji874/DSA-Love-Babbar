#include <bits/stdc++.h>
using namespace std;

void lastOccurrenceLTR(string& s, char x, int i, int& ans) {
    //base case
    if(i >= s.size()) {
        return;
    }

    //ek solution
    if(s[i] == x) {
        ans = i;
    }

    //recursion
    lastOccurrenceLTR(s, x, i+1, ans);
}

void lastOccurrenceRTL(string& s, char x, int i, int& ans) {
    //base case
    if(i < 0) {
        return;
    }

    //ek solution
    if(s[i] == x) {
        ans = i;
        return;
    }

    //recursion
    lastOccurrenceRTL(s, x, i-1, ans);
}

int main() {

    string s;
    cin >> s;

    char x;
    cin >> x;

    int i = 0;
    int ans = -1;

    //lastOccurrenceLTR(s, x, i, ans);
    lastOccurrenceRTL(s, x, s.size() - 1, ans);
    cout << ans << endl;

    return 0;
}