#include<iostream>
using namespace std;
int main ()
{
    
int n;
cout<<"enter number ";
cin>>n;
if (( n%3==0 || n%5==0) && (n%15!=0))
{
    cout<<"div by 3 or 5 and not div by 15";
}

    else {
         cout<<"  div by 3 or 5 and  div by 15";
    }
}
