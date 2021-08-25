#include <bits/stdc++.h>
using namespace std;

namespace first::second
{

    int inside(int x)
    {
        return x;
    }

}

namespace third
{
    int another(int x)
    {
        return x;
    }
}

using third::another;

int main()
{
    cout << first::second::inside(5);
    cout << another(4);
}
