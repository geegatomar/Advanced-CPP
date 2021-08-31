#include <bits/stdc++.h>
using namespace std;

enum FruitType
{
    apple,
    grape,
    guava
};

int main()
{
    int two = 2;
    FruitType fruit = guava;
    // Compiler does implicit conversion from type FruitType to type int.
    cout << (guava == two ? "Yes" : "no") << endl;
    cout << (guava == fruit ? "Yes" : "no") << endl;
    cout << (FruitType::guava == fruit ? "Yes" : "no") << endl;
}