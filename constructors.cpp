#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

class RGBA
{
public:
    int m_red, m_green, m_blue, m_alpha;

    RGBA(int r = 0, int g = 0, int b = 0, int a = 255)
        : m_red{r}, m_green{g}, m_blue{b}, m_alpha{a}
    {
    }

    void print()
    {
        cout << m_red << " " << m_green << " " << m_blue << " " << m_alpha << endl;
    }
};

public:
Foo()
{
    // code to do A
}

Foo(int value) : Foo{} // use Foo() default constructor to do A
{
    // code to do B
}

int main()
{
    RGBA teal{0, 127, 127};
    teal.print();
}

// class A
// {
// public:
//     A(int x) { std::cout << "A " << x << '\n'; }
// };

// class B
// {
// private:
//     A m_a;

// public:
//     B(int y)
//         : m_a{y - 1} // call A(int) constructor to initialize member m_a
//     {
//         std::cout << "B " << y << '\n';
//     }
// };

// int main()
// {
//     B b{5};
//     return 0;
// }

// class Element
// {
// public:
//     int num1, num2;

//     Element(int x, int y) : num1 {x}, num2 {y}
//     {
//         num1 = x;
//         num2 = y;
//     }
// };

// int main()
// {
//     Element e{5, 4};
//     cout << e.num1 << " " << e.num2 << endl;
// }
