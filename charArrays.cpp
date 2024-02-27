#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char getMaxOccCharacter(string s) {
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        int number = 0;
        if(ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        }
        else {
            number = ch - 'A';
        }
    }
    int maxi = -1;
    for(int i = 0; i < s.length(); i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }

        char finalAns = 'a' + ans;
        return finalAns;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n - 1;
    while(s <= e) {
        if(toLowerCase(a[s]) != toLowerCase(a[e])) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while(s < e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

void replaceSpaces(char sentence[]) {
    int n = strlen(sentence);
    int i = 0;
    for(int i = 0; i < n; i++) {
        if(sentence[i] == " ") {
            sentence[i] = "@";
        }
    }
}

int main()
{
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;

    cout << "Your name is " << endl;
    cout << name << endl;

    int len = getLength(name);
    cout << "Length: " << getLength(name) << endl;

    reverse(name, len);

    cout << "Your name is " << name << endl;

    cout << "Palindrome or not: " << checkPalindrome(name, len) << endl;

    cout << "My name is: " << replaceSpaces(name);
    return 0;
}