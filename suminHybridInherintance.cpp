#include<iostream>
using namespace std;

class A 
{
    public:
    int x;
    
};
class B : public A
{
    public:
    B()
    {
        cout << " Enter the value of X:";
        cin >> x;
    }
};
class C 
{
    public:
    int y;
    C()
    {
        cout << " Enter the value of Y:";
        cin >> y;
    }   
};
class D : public B,public C
{
   public:
   int sum1;
   void sum()
   {
      sum1=x+y;
      cout << " Your sum is:" << sum1;
   }
};
int main()
{
    D myS;
    myS.sum();

    return 0;
}