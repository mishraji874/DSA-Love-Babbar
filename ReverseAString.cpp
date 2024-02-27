#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int start, int end) {
    //base case
    if(start >= end) {
        return;
    }

    //ek solution
    swap(s[start], s[end]);

    //recursion
    swap(s[start+1], s[end-1]);
}

int main() {

    string s;
    cin >> s;
    reverse(s, 0, s.size() - 1);

    cout << s << endl;

    return 0;
}