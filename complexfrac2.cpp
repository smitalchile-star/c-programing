#include <iostream>
using namespace std;

class Complex
{
public:
    float real, imag;

    void input()
    {
        cin >> real >> imag;
    }

    void divide(Complex c)
    {
        float denominator = c.real * c.real + c.imag * c.imag;

        float realPart = (real * c.real + imag * c.imag) / denominator;
        float imagPart = (imag * c.real - real * c.imag) / denominator;

        cout << "Result = " << realPart << " + "
             << imagPart << "i";
    }
};

int main()
{
    Complex c1, c2;

    cout << "Enter real and imaginary part of first complex number: ";
    c1.input();

    cout << "Enter real and imaginary part of second complex number: ";
    c2.input();

    c1.divide(c2);

    return 0;
}

