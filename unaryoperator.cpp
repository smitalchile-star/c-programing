#include<iostream>
using namespace std;
class number {
int x;

public:
number(int a){
x=a;
}
void operator++() {
++x;
}
void display(){
cout<<"value = "<<x<<endl;
}
};
int main() {
number n(10);
cout<<"before increment: ";
n.display();

++n;
cout<<"after increment: ";
n.display();

return 0;
}
