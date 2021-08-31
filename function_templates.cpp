#include <iostream>
using namespace std;

template <typename T>
T mymax(T num1, T num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

template <typename T>
T mmax(T x, T y)
{

    cout << "Templatized!\n";
    return (x > y) ? x : y;
}

int mmax(int x, int y)
{
    cout << "Not Templatized!\n";
    return (x > y) ? x : y;
}

// When you are unsure what datatype to return, use 'auto'.
template <typename T1, typename T2>
auto diffmax(T1 x, T2 y)
{
    return (x > y ? x : y);
}

int main()
{
    cout << mymax(2, 3) << endl;
    cout << mymax(2.5, 3.5) << endl;

    std::cout << mmax<int>(1, 2) << '\n'; // selects max<int>
    std::cout << mmax<>(1, 2) << '\n';    // deduces max<int>(int, int) (non-template functions not considered)
    std::cout << mmax(1, 2) << '\n';      // calls function max(int, int)

    return 0;
}