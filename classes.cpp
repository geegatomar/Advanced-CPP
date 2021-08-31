#include <bits/stdc++.h>
using namespace std;

class IntPair
{
public:
    int num1, num2;

    void set(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void print()
    {
        cout << num1 << " " << num2 << endl;
    }
};

int main()
{
    IntPair p1;
    p1.set(1, 1); // set p1 values to (1, 1)

    IntPair p2{2, 2}; // initialize p2 values to (2, 2)

    p1.print();
    p2.print();

    return 0;
}