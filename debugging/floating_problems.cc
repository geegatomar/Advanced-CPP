#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main()
{
    double x = 0.1 + 0.1 + 0.1;
    cout << setprecision(22);
    cout << fixed;
    cout << x << " " << 0.3 << endl;
    if (x == 0.3)
        cout << "YES";
}