#include<iostream>
using namespace std;

class Car
{
    bool startEngine;
    public:
    void start()
    {
        startEngine = true;
        cout << " Engine started...." << "\n";
    }
    void drive()
    {
        if (startEngine)
        {
            cout << " You are ready to drive";
        }
        else
        {
           cout << " You are't ready to drive";
        }
    }
};

int main()
{
    Car c;
    c.start();
    c.drive();

    return 0;
}