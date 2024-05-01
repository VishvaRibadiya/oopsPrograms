#include<iostream>
using namespace std;

class Encap
{
    private:
    int age;
    void show()
    {
        cout << " Ankush";
    }
    public:
    string name;
    void setvalue(int a)
    {
        show();
        age=a;
        cout << age << "\n";
    }
};

int main()
{
    Encap E;
    E.name="Akhil";
    E.setvalue(19);
    // E.show();
    cout << E.name;

    return 0;
}