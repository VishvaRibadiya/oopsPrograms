#include<iostream>
using namespace std;

class Car{
    public:
    int tyre;
};

int main(){
    Car obj1;
    obj1.tyre = 4;
    cout << "Tyre is : " << obj1.tyre;
    return 0;
}