#include <bits/stdc++.h>
using namespace std;

void checkingReferencedArraySize(int (&arr)[5])
{
    cout << sizeof(arr) << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    cout << "OUT: " << sizeof(arr) << endl;
    checkingReferencedArraySize(arr);

    int x{5};
    const int &ref1{x};
    x = 4;

    cout << x << " " << ref1 << endl;

    // int n;
    // cin >> n;
    // string *arr = new string[n];
    // cout << "Enter each name: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // sort(arr, arr + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}
