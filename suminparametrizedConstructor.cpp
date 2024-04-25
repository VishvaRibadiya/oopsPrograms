#include<iostream>
using namespace std;
class ABC
{
    private:
    int num1,num2,sum;
    public:
    ABC(int a,int b)
    {
        num1=a;
        num2=b;
    }
    int calsi()
    {
       sum=num1+num2;
       return sum;
    }
    void display()
    {
        cout << "sum=" << sum << "\n"; 
    }
};
int main()
{
    ABC v(2,5);
    v.calsi();
    v.display();
    ABC v1 = ABC(4,7);
    v1.calsi();
    v1.display();

    return 0;
}