#include<iostream>
using namespace std;
int main ()
{
    int n, mul=1, ld;
    cout<<"enter number: ";
    cin>> n;
    while (n!=0)
    {
        ld = n%10;
        mul = mul * ld;
        n = n/10;
    }
    cout<<mul;
}
