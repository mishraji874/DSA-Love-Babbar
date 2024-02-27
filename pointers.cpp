#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    //address of operator -&

    cout << "address of num is " << &num << endl;

    int *ptr = &num;

    cout << "address is " << ptr << endl;
    cout << "value is " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "address is " << p2 << endl;
    cout << "value is " << *p2 << endl;

    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(ptr) << endl;

    int i = 5;
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    int num1 = 5;
    int a = num1;
    a++;

    cout << num1 << endl;

    int *p3 = &num1;
    cout << "before " << num1 << endl;
    (*p3)++;
    cout << "after " << num1 << endl;

    int *q = p3;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    int j = 3;
    int *t = &j;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    int arr[10] = {2,5,6};

    cout << "address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;

    //formula 
    // arr[ii] = *(arr + i)

    int temp[10];
    cout << sizeof(temp) << endl;
    cout << "1st " << sizeof(*temp) << endl;
    cout << "2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    int a[20] = {1,2,3,5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int arr1[10];

    int *ptr1 = &arr[0];
    ptr1 = ptr1 + 1;
    cout << ptr << endl;

    int arr2[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;

    char temp = 'z';
    char *p4 = &temp;

    cout << p << endl;


    return 0;
}