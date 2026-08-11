#include<iostream>
using namespace std;
class complex 
{
int real,image;
public:
 void getdata() {
   cout<<"enter the real and imaginary part:";
   cin>>real>>image;
   }
   void add(complex c1, complex c2)
   {
   real = c1.real + c2.real;
   image = c1.image + c2.image;
   }
   void display() {
    cout<<"sum = "<<real<<"+"<<image<<"i";
    }
    };
    int main()
    {
      complex c1, c2, c3;
      cout<<"enter the first complex:\n";
      c1.getdata();
      cout<<"enter the second complex number:\n";
      c2.getdata();
      c3.add(c1, c2);
      c3.display();
       return 0;
    }
      
  
