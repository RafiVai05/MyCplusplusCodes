#include<iostream>
using namespace std;
int main ()
{
    int n;
    int product =1;
cout<<"calculate factorial: ";
cin>> n;
if ( n<0 )
{cout<<"factorial of a negative is undefined";}
else {

for ( int i=1; i<=n; i++)
 {product *= i;}
}
 cout<<"factorial of "<<n<<"is " <<product;
}
 