
#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle
{
public:
    void start()
    {
        cout << "Car is starting." << endl;
    }

    void stop()
    {
        cout << "Car is stopping." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void start()
    {
        cout << "Bike is starting." << endl;
    }

    void stop()
    {
        cout << "Bike is stopping." << endl;
    }
};

int main()
{
    Vehicle *v;

    Car c;
    Bike b;

    v = &c;
    v->start();
    v->stop();

    v = &b;
    v->start();
    v->stop();

    return 0;
}
