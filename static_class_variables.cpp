#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

class Student
{
public:
    static string school;
    int id;
    string name;

    Student(string school, int id, string name) : id{id}, name{name}
    {
    }
};

string Student::school = "Stanford MIT Harvard";

int main()
{
    cout << Student::school;
    Student s1("NITK", 4, "Santo");
    cout << s1.school << "      " << Student::school << endl;
    s1.school = "Changed";
    cout << s1.school << "      " << Student::school << endl;
}