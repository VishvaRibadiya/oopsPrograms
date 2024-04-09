#include<iostream>
using namespace std;

class A{
    public:
    int x;
    void math(){
    
    cout << " Enter the value of X:";
    cin >> x;
    }
};
class B:public A
{
    public:
    int y;
    void calculator(){ 
    cout << " Enter the value of Y:";
    cin >> y;
    }
    void sum1(){
    int sum;
    sum=x+y;
    cout << " Your sum is:" << sum;
    }
};

int main()
{
   B S;
   S.math();
   S.calculator();
   S.sum1();
   
   return 0;
}