#include <bits/stdc++.h>
using namespace std;

// During the linking stage, linker looks for the 'definition' which it find here.
// Hence compile and link both these files together.
// Or else the other option would be to write a header file, and include the .h file which
// contains the declaration and the .cc file which contains the definition.
int add(int x, int y)
{
    return x + y;
}

// In this case if you dont compile and link both files together, then the linker
// will give an error since its unable to locate the definition of this function add().