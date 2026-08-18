#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

 
    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void subtract(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void display() {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {

    Complex num1, num2, sum, sub;

    cout << "For First Complex Number:\n";
    num1.input();

    cout << "\nFor Second Complex Number:\n";
    num2.input();

    sum.add(num1, num2);

    cout << "\nThe Addition is: ";
    sum.display();

    sub.subtract(num1, num2);

    cout << "The Subtraction is: ";
    sub.display();

    return 0;
}
