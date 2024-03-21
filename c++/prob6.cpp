#include<iostream>
using namespace std;
int main ()
{
   int n;
   cout<<"enter number of characters: " ;
   cin>>n;
   for (int i=1; i<=n; i++)
{char ch;
cin>>ch;
ch = tolower (ch);


if (ch == 'a' || ch == 'e' || ch== 'i' || ch == 'o ' || ch == 'u' )
{
    cout << ch<< " ";
}
}

}