#include<iostream>
using namespace std;
int main ()
{
    int n, sum=0, eld=0, ld;
    cout<<"enter number: ";
    cin>> n;
    while (n!=0)
    {ld = n%10;
    n = n/10;
    if ( ld % 2 == 0)
    { eld = ld;
        sum = sum + eld;
    }
   
    }
 
  cout<<sum;

}
