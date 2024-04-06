#include<iostream>
using namespace std;

class Banking
{
   public:
   void b1();
   void b2();
   void b3();
   void b4();
   int amount,balance;
};
   
void Banking :: b1()
{
    
    cout << " Enter your money(Rs form): " << "\n";
    cin >> amount;
    balance=balance+amount;
    cout << " Your Amount " << amount << " sucecefully" << "\n";

} 
void Banking :: b2()
{
    

    cout << " Enter your withdraw amount :";
    cin >> amount;

    if(balance >= amount)
    {
        balance=balance-amount;
        cout << " Withdraw of Rs: " << amount << " Successfully" << "\n";
    }
    else
    {
        cout << " Insufficient money" << "\n";
    }
}
void Banking :: b3()
{
    
    cout << " Your balance is: " << balance << "\n";

}

void Banking :: b4()
{
    cout << " Thank you.. for banking";
}

int main()
{
    Banking obj1;
    Banking obj2;
    Banking obj3;
    Banking obj4;

    obj1.b1();
    obj2.b2();
    obj3.b3();
    obj4.b4();

    return 0;

}