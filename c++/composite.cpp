#include<iostream>
using namespace std;
int main ()
{
  int n;
cout<<"enter number: ";
cin>> n;
bool flag = true;
for (int i=2; i<=n/2; i++)
{
if (n%i == 0)
{
  flag = false;
  break;
}
}
if (n ==1 || n== 0)
{cout<<"neither comp nor prime";}
else if (flag )
cout<< "prime ";
else cout<<"composite";


}