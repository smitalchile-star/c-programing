#include <iostream>
using namespace std;

class Complex
{
public:
    float real, imag;

    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

   
    Complex add(Complex c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

  
    Complex subtract(Complex c)
    {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

   
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main()
{
    Complex c1, c2, sum, difference;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    sum = c1.add(c2);
    difference = c1.subtract(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}


