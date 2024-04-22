#include<iostream>
using namespace std;

class example
{
    private:
    int x;
    public:
    example(int a)
    {
        x=a;
    }
    example(example &b)
    {
        x=b.x;
    }
    int display()
    {
        return x;
    }

};    
    int main()
    {
        example c1(2);
        cout << "example c1=" << c1.display () << "\n";
        example c2(c1);
        cout << "example c2=" << c2.display() << "\n";
        example c3 = c1;
        cout << "example c3=" << c3.display() << "\n";
        example c4 = c2;
        cout << "example c4=" << c4.display() << "\n";

        return 0;
    }
