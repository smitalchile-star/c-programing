#include<iostream>
using namespace std;
class number {
int x;
public:
 number(int a){
x=a;
}
number operator+(number n){
 return number(x + n.x);
 }
void display(){
cout<<"value = "<<x<<endl;
}
};
int main() {
number n1(10),n2(20),n3(0);
n3 = n1 + n2;
cout<<"addition: ";
n3.display();
return 0;
}
