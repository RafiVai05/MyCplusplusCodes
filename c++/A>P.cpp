#include<iostream>
using namespace std;
int main ()
{
    
float l,b;
cout<<"Enter length: ";
cin>>l;
cout<<"Enter breadth: ";
cin>>b;
float area = l*b;
float perimeter = 2*(l+b);
if ( area>perimeter)
{
    cout<<"area is greater";
    
}
    else {
        cout<<"perimeter is greater";
    }
}