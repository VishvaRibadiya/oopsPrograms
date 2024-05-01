#include<iostream>
using namespace std;

class A
{
    int a=20,b=40;
    public:
    void show()
    {
        cout << "The value of A & B:" << a << " " << b << "\n";
          
    }
    friend class B;
};
class B
{
   public: 
   void add(A r)
   {
    int add=r.a + r.b;
    cout << " Your ans is :" << add;
   }
};

int main()
{
    A obj;
    obj.show();
    B obj1;
    obj1.add(obj);

    return 0;
}
