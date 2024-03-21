#include<iostream>
using namespace std;
int main ()
{
    int sz ;
   
    cout<<"enter size: ";
    cin>> sz;

     double ar[sz], sum = 0 ;

    for ( int i = 1 ; i<=sz ; i++)
    {
        cout<<"input at "<<i<<" index: ";
        cin>>ar[i];
    }
    cout<<"array elements: ";
     for ( int i = 1 ; i<=sz ; i++) 
     {
        cout<<ar[i]<<" ";
        sum+=ar[i];
        
     }cout<<endl;
    cout<<"sum is: " <<sum<<endl;
    
}