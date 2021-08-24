#include <bits/stdc++.h>
using namespace std;

struct Car
{
public:
    int color;
    int wheel;
};

int getWheel(Car &c)
{
    cout << "LValue one called\n";
    return c.wheel;
}

int getWheel(const Car &c)
{
    cout << "Third one called";
    return c.wheel;
}

int getWheel(Car &&c)
{
    cout << "RValue one called\n";
    return c.wheel;
}

int main()
{
    Car temp;
    temp.color = 3;
    temp.wheel = 3;

    // cout << getWheel(temp) << endl;
    // cout << getWheel(std::move(temp));

    int x = 'a';
    cout << x << endl;
    //cin >> x;
    cout << x << endl;

    const char b = 'b';
    string bb = "b";
    cout << atoi(&b) << endl;
}