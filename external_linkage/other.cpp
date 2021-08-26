#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

void print_func();

// Forward declaration with the keyword extern.
extern int g_x;
const int x = 10;

int main()
{
    cout << "Inside other file, address of x is : " << &g_x << endl;
    print_func();

    cout << "------- Value of x in other is: " << x << "  , " << &x << endl;
}