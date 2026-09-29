#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }
    void operator+() {
        x = +x;
    }
    void operator-() {
        x = -x;
    }

    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Number n(10);

    cout << "Original value: ";
    n.display();

    +n;
    cout << "After unary addition (+): ";
    n.display();

    -n;
    cout << "After unary subtraction (-): ";
    n.display();

    return 0;
}
