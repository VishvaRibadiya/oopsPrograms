#include<iostream>
using namespace std;

class Calculator
{
    public:
    void sample();
    void sample1();
    void sample2();
    void sample3();

    int a,b,value;
};

void Calculator :: sample()
{
    cout << " Addtion...";
    cout << " Enter the value of A: ";
    cin >> a;

    cout << " Enter the value of B: ";
    cin >> b;

    cout << " Your sum is : " << a+b << "\n";
}
void Calculator :: sample1()
{
    cout << " Substraction...";
    cout << "Enter the value of A:";
    cin >> a;

    cout << "Enter the value of B :";
    cin >> b;

    cout << " Your ans is: " << a-b << "\n";
}
void Calculator :: sample2()
{
    cout << " Multiplication...";
  cout << "Enter the value of A:";
    cin >> a;

    cout << "Enter the value of B :";
    cin >> b;

    cout << " Your ans is: " << a*b <<"\n";  
}
void Calculator :: sample3()
{
    cout << " Divide...";

cout << "Enter the value of A:";
    cin >> a;

    cout << "Enter the value of B :";
    cin >> b;

    cout << " Your ans is: " << a/b <<"\n";
}    
int main()
{
    Calculator obj1;
    Calculator obj2;
    Calculator obj3;
    Calculator obj4;
    obj1.sample();
    obj2.sample1();
    obj3.sample2();
    obj4.sample3();
    

    return 0;
}
