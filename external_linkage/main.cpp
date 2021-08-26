#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int g_x = 4;
const int x = 20;

void print_func()
{
    cout << "Inside main file, address of x is : " << &g_x << endl;
    cout << "---------- Val of x in main: " << x << "  , " << &x << endl;
}