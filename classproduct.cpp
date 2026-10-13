
#include <iostream>
#include <string>
using namespace std;

class Product
{
    int productID;
    string productName;
    int quantity;
    float unitPrice;

public:
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    float calculateCost()
    {
        return quantity * unitPrice;
    }

    void displayInfo()
    {
        cout << "\n--- Product Information ---" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unitPrice << endl;
        cout << "Total Cost: " << calculateCost() << endl;
    }
};

int main()
{
    Product p;

    p.acceptDetails();
    p.displayInfo();

    return 0;
}
