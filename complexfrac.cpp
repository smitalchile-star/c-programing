#include <iostream>
using namespace std;

int main() {
    int realNum, realDen;
    int imagNum, imagDen;

    cout << "Enter real part numerator and denominator: ";
    cin >> realNum >> realDen;

    cout << "Enter imaginary part numerator and denominator: ";
    cin >> imagNum >> imagDen;

    cout << "Complex number = "
         << realNum << "/" << realDen
         << " + "
         << imagNum << "/" << imagDen << "i";

    return 0;
}
      
