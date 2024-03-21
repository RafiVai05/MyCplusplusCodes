#include<iostream>
using namespace std;
int main ()
{
  int costPrice, sellPrice;
  cout<<"Input Cost price: " ;
    cin>>costPrice;
  cout<<"Input sellPrice: ";
  cin>>sellPrice;
  if(costPrice<sellPrice)
  {
    cout<<"U have made profit"<<endl;
    int  profitMade = sellPrice-costPrice;
    cout<<"profit made: " <<profitMade;
  }
  else if(costPrice>sellPrice) {
    cout<<"u have incurred loss"<<endl;
    int lossIncurred = costPrice - sellPrice;
    cout<<"loss incurred: " <<lossIncurred;
  }
else { 
    cout<<"no profit no loss";
}

    
}