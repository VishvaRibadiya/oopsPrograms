#include<iostream>
using namespace std;

class A 
{
    public:
    int x;
    void math()
    {
       cout << " Enter the value of X:";
       cin >> x;  
    }
};
class B : public A
{
    public:
    int y;
    void calci()
    {
        cout << " Enter the value of Y:";
        cin >> y;
    }
};
class C : public B
{
    public:
    int sum;
    void sum1()
    {
        sum=x+y;
        cout << " Your ans is:" << sum;

    }
};
int main()
{
    C myS;
    myS.math();
    myS.calci();
    myS.sum1();
    return 0;
}
