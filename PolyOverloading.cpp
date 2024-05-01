#include<iostream>
using namespace std;

void Info(int age)
{
    cout << age <<endl;
}
void Info(string name)
{
    cout << name << endl;
}
void Info(double salary)
{
    cout << salary << endl;
}
int main()
{
    Info("Vishva");
    Info(25);
    Info(50000);
    return 0;
}