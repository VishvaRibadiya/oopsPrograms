#include<iostream>
using namespace std;

class Ankush;
class Ankit
{
   private:
   int money=20;
   friend  void rohit(Ankush,Ankit);
};
class Ankush
{
    private:
    int money=10;
    friend void rohit(Ankush,Ankit);
};
void rohit(Ankush r1,Ankit r2)
{
    cout << "TOtal money is:" << r1.money + r2.money;
}
int main()
{
    Ankush obj1;
    Ankit obj2;
    rohit(obj1,obj2);

    return 0;
}