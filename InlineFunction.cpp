#include<iostream>
using namespace std;

inline int fun(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout << "Enter the value of A:";
    cin >> a;
    cout << " Enter the value of B:";
    cin >> b;
    int value = fun (a,b);
    cout  << " Your sum is : " << value;
    return 0;
    
}