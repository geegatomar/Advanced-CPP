
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string s1 = "Hello ";
    std::string s2 = "world";
    std::string &&s_rref = s1 + s2; // the result of s1 + s2 is an rvalue
    s_rref = ", my friend";         // I can change the temporary string!
    std::cout << s_rref << '\n';    // prints "Hello world, my friend"
    cout << s1 << " " << s2 << endl;
    cout << s1 + s2 << endl;
}
