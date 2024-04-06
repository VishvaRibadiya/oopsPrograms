#include <iostream>
using namespace std;

class Grade
{
public:
    void G1();
    int total, per, guj, hindi, eng, math;
};

void Grade ::G1()
{
    cout << " Enter your gujarati marks :"
         << "\n";
    cin >> guj;

    cout << " Enter your English marks :"
         << "\n";
    cin >> eng;

    cout << " Enter your hindi marks :"
         << "\n";
    cin >> hindi;

    cout << " Enter your maths marks : "
         << "\n";
    cin >> math;

    total = guj + hindi + eng + math;
    cout << " Your total is :" << total << "\n";

    per = total / 4;
    cout << " Your persentage is : " << per << "\n";

    if (per < 33)
    {
        cout << " You are fail  \n";
    }
    else if (per <= 43)
    {
        cout << " Your grade is F  \n";
    }
    else if (per <= 53)
    {
        cout << " Your grade is E  \n";
    }
    else if (per <= 63)
    {
        cout << " Your grade is D  \n";
    }
    else if (per <= 73)
    {
        cout << " Your grade is C  \n";
    }
    else if (per <= 83)
    {
        cout << " Your grade is B  \n";
    }
    else if (per <= 93)
    {
        cout << " Your grade is A  \n";
    }
    else
    {
        cout << "Your grade is A+... Congretulations... ";
    }
}
int main()
{
    Grade obj1;
    obj1.G1();

    return 0;
}