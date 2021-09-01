#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

class Vector2
{
public:
    int x, y;

    Vector2(int x, int y) : x(x), y(y)
    {
    }

    // A const member method is one that guarantees to not modify the object.
    // Vector2 Add(const Vector2 &other) const
    // {
    //     return Vector2(x + other.x, y + other.y);
    // }

    // Vector2 operator+(const Vector2 &other) const
    // {
    //     return Add(other);
    // }

    // Using the friend function for operator overloading
    friend Vector2 operator+(Vector2 &v1, Vector2 &v2)
    {
        return Vector2(v1.x + v2.x, v1.y + v2.y);
    }
};

int main()
{
    Vector2 v1{2, 3}, v2{4, 1};
    Vector2 v3 = v1 + v2;
}