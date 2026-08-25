#include <iostream>
using namespace std;

class Product
{
    int productID;
    string name;
    float price;
    int quantity;

public:
    Product(int id, string n, float p, int q)
    {
        productID = id;
        name = n;
        price = p;
        quantity = q;
    }

    void display()
    {
        cout << "Product ID : " << productID << endl;
        cout << "Name       : " << name << endl;
        cout << "Price      : " << price << endl;
        cout << "Quantity   : " << quantity << endl;
    }

 
    float totalCost()
    {
        return price * quantity;
    }
};

int main()
{
    Product p(101, "Laptop", 50000, 2);

    cout << "Product Details:" << endl;
    p.display();

    cout << "Total Cost   : " << p.totalCost() << endl;

    return 0;
}
