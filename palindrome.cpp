#include<iostream>
using namespace std;
int main()
{
int n , orignal;
int rev;
int rem;
cout<<"enter the number";
cin>>n;
while(n!=0)
{
rem = n%10;
rev = rev*10 + rem;
n= n/10;
}
if(orignal==rev)
cout<<"palindrome num";
else;
cout<<"not palindrome";
return 0;
}
