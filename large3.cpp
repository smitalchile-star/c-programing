#include<iostream>
using namespace std;
int main()
{
int a=2;
int b=1;
int c=3;
if(a>=b && a>=c)
 cout<<a<<"the num is largest";
else if(b>=c  && b>=a)
 cout<<b<<"the num is largest";
else 
 cout<<c<<"is largest";
 
 return 0;
}
