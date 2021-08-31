#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    Employee(int id, string name) : id{id}, name{name}
    {
    }

    Employee(int id) : Employee{id, ""}
    {
    }
};

int main()
{
    Employee emp1{3};
}