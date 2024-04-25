#include<iostream>
using namespace std;

class ABC
{
   public:
   int a,b,sum;

   ABC()
   {
   cout << " Enter the value of A:";
   cin >> a;
   cout << "Enter the value of B:";
   cin >> b;
   }
   void total()
   {
      sum=a+b;
   }

   void display()
   {
      cout << "Your sum is:" << sum;
   }

};
int main()
{
    ABC obj1;
    obj1.total();
    obj1.display();

    return 0;
}