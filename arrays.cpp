#include <bits/stdc++.h>
using namespace std;

void check(int arr[])
{
    // Note: Inside functions, here, 'arr' refers to the pointer to array (and not the array itself)
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
}

int main()
{
    int arr[5]{1, 2, 3, 4, 5};
    cout << "OUT : " << sizeof(arr) / sizeof(arr[0]) << endl;
    check(arr);
}