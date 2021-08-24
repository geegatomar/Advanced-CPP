#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

void waiting()
{
    sleep(5);
}

// In C++, it always executes in order, and hence waits for the waiting() function
// before it prints the second statement.
int main()
{
    cout << "Before\n";
    waiting();
    cout << "After\n";
}
