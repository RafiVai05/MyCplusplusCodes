#include<iostream>
using namespace std;
int main ()
{
   int f, n;
cout<<"enter number n: ";
cin>> n;
//for ( int i= 1; i<n; i++)
//for ( int i= 1; i<=n/2; i++)
for(int i =n/2; i>=1; i--)
{if(n%i == 0) 
{f=i;
break;}
}
cout<<f; 


    
}
