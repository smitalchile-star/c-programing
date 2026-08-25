#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    float area()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "Length  : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Area    : " << area() << endl;
    }
};

int main()
{
    Rectangle r1;
    cout << "Default Constructor:" << endl;
    r1.display();

 Rectangle r2(10, 5);
    cout << "\nParameterized Constructor:" << endl;
    r2.display();

    Rectangle r3(r2);
    cout << "\nCopy Constructor:" << endl;
    r3.display();

    return 0;
}
