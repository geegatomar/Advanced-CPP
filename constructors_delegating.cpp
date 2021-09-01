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

class Student
{
public:
    int id{2}, roll{3};

    Student() : id{4}
    {
    }
};

int main()
{
    Employee emp1{3};
    Student s;
    cout << s.id << " " << s.roll << endl;
}