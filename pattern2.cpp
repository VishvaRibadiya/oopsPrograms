#include<iostream>
using namespace std;

class Pattern
{
    public:
    int i,j,k,n;
    void p1();
};

void Pattern :: p1()
{
    cout << " Enter the number : ";
    cin >> n;

    for (i=1;i<=n;i++)
    {
            for(k=1;k<n;k++)
       {
                cout << " ";
       }    
            for(j=1;j<=i;j++)
            {
            cout << "*";

            }
        cout << "\n";
        
    }
}
int main()
{
    Pattern obj1;
    obj1.p1();

    return 0;
}