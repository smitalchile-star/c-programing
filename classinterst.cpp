#include<iostream>
using namespace std;

class Interest
{
    float p, r, t, si;

public:
    void accept()
    {
        cout << "Enter Principal, Rate and Time: ";
        cin >> p >> r >> t;
    }

    void calculate()
    {
        si = (p * r * t) / 100;
        cout << "Simple Interest = " << si;
    }
};

int main()
{
    Interest i;
    i.accept();
    i.calculate();
    return 0;
}
