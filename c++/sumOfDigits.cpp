#include<iostream>
using namespace std;
int main ()
{
    int n, sum=0, ld;
    cout<<"enter number: ";
    cin>> n;
    while (n!=0)
    {
        ld = n%10;
        sum = sum + ld;
        n = n/10;
    }
    cout<<sum;
}
