#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
    c();
    d();
}

void a()
{
    b();
}

int main()
{
    a();

    return 0;
}

// #include <iostream>

// int readNumber(int x)
// {
//     std::cout << "Please enter a number: ";
//     std::cin >> x;
//     return x;
// }

// void writeAnswer(int x)
// {
//     std::cout << "The sum is: " << x;
// }

// int main()
// {
//     int x{};
//     readNumber(x);
//     x = x + readNumber(x);
//     writeAnswer(x);

//     return 0;
// }