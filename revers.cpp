#include<iostream>
using namespace std;
int main()
{
int n;
int rev;
int rem;
cout<<"enter the number";
cin>>n;
while(n!=0)
{
rem = n % 10;
rev = rev *10+ rem;
n/=10;
}
cout<<"revers number"<<rev<<endl;
return 0;
}

