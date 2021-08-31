#include <iostream>

void print(char c, int x)
{
    std::cout << 'a';
}

void print(char c, double x)
{
    std::cout << 'b';
}

void print(char c, float x)
{
    std::cout << 'c';
}

// By default a decimal number is treated as double, but you can static cast it to float.
int main()
{
    print('x', static_cast<float>(3.500001));
}