#include<iostream>
using namespace std;
 class Greatest 
 {
   int a, b;
    
    public:
      void accept()
      {
       cout<<"enter the two numbers:";
       cin>>a>>b;
      }
      void display()
      {
      if(a>b)
       cout<<"greatest:"<<a;
       else
       cout<<"greatest:"<<b;
       }
       };
       int main()
       {
       Greatest g;
       g.accept();
       g.display();
       return 0;
       }
       
       
