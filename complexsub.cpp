#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex subtract(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    result = c1.subtract(c2);

    cout << "\nSubtraction of complex numbers = ";
    result.display();

    return 0;
}

