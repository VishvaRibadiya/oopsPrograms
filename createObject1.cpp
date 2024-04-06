#include<iostream>
using namespace std;

class Lipstick      // class
{
    public:         // access specifier
    int n;          // attribute
};
int main()
{
   Lipstick obj1;       //create a object
   obj1.n = 5;          // set value in object
   cout << " Your lipstick :" << obj1.n;        // priint 
   return 0;
}