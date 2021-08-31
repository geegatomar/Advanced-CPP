#include <bits/stdc++.h>
using namespace std;

void modify(int *ptr)
{
    *ptr = 10;
}

void print(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5]{1, 2, 3, 4, 5};
    cout << typeid(arr).name() << " " << typeid(&arr).name() << endl;

    print(arr);
    modify(arr);
    print(arr);
}