#include<iostream>
using namespace std;

class ABC
{
    private:
    int length,breadth,x;
    public :
    ABC(int a,int b)
    {
        length=a;
        breadth=b;
    }
    int area ()
    {
        x=length*breadth;
        return x;
    }
    void display ()
    {
        cout << "area=" << x << "\n";

    }
};
int main()
{
    ABC c(2,4);
    c.area();
    c.display();
    ABC c1 = ABC(4,4);
    c1.area();
    c1.display();

    return 0;
}