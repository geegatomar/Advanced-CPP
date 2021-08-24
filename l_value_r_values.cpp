#include <bits/stdc++.h>

using namespace std;

int global = 5;
int global2 = 5;

// int& is the reference, basically an alias to the variable global
int &func()
{
    int &x = global;
    cout << "Size of x: " << sizeof(x) << endl;
    cout << "Type of x: " << typeid(x).name() << endl;
    cout << "Type of global: " << typeid(global).name() << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of global: " << &global << endl;
    return x;
}

// Same thing as above, but now using pointers
int *func2()
{
    return &global2;
}

int main()
{
    // This function returns a reference, and this reference is an l-value reference, hence this is correct.
    func() = 10;
    *func2() = 10;
    cout << global << endl
         << global2 << endl;
}