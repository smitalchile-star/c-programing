#include<iostream>
using namespace std;
int main()
{
float r,area,circumference;
const float PI = 3.14;
cout<<"enter the r of circle";
cin>>r;
area = PI *r*r;
circumference= 2*PI*r;
cout<<"area of circle"<<area<<endl;
cout<<"circumference of circle"<<circumference<<endl;
return 0;
}
