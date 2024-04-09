#include<iostream>
using namespace std;

class A
{
    public:
    int x,y;
    void math()
    {
        cout << " Enter the value of X:";
        cin >> x;
        cout << " Enter the value of Y:";
        cin >> y;
    }

};
class B :public A
{
   public:
   int mul;
   void calci()
   {
       mul=x*y;
       cout << " Your multiple is :" << mul << "\n";
   }
};
class C:public A
{
    public:
    int sum;
    void sum1()
    {
        sum=x+y;
        cout << " Your sum is :" << sum << "\n";
    }
};
int main ()
{
    cout << "\n====class B==== \n\n";
    B myS;
    myS.math();
    myS.calci();

    cout << "\n====class C==== \n\n";
    C myS1;
    myS1.math();
    myS1.sum1();

    return 0;
}
