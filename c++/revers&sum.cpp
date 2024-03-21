#include<iostream>
using namespace std;
int main ()
{
    int n, r=0, ld, sum=0;
    cout<<"enter number: ";
    cin>> n;
    int x = n;
    while (n!=0)
    {
    ld = n%10;
    r = r * 10;
    r = r + ld;
    n = n/10;
    sum +=ld;
    }
    cout<<sum<<endl;
    cout<<r<<endl;
    int sum2= x+r;
    cout<<sum2;
}
