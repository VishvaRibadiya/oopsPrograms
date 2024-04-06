#include <iostream>
using namespace std;
 
// recursive function to print * on console
void print(int n)
{
    if(n == 0) // base case
    {
        return;
    }
      cout << "* "; 
      print(n - 1); // calling recursively
}
 
// recursive function to demonstrate printing pattern
void pattern(int n)
{
    // base case
    if (n == 0) 
    {
        return;
    }
    else
    {
        // calling function recursively
        pattern(n - 1);
 
        // print "* " n times
          print(n);
       
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Function
int main()
{
    int n = 5;
    pattern(n);
}