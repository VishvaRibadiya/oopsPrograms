#include<iostream>
using namespace std;

inline int fun(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;

    int value = fun(a,b);
    cout << "Sum is : " << value;
    return 0;
}