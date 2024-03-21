#include <iostream>
using namespace std;

int main()
{
    double temp, humid, sum_of_temp, sum_of_humid,avg_temp,avg_humid;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter temp of day" << i << endl;
        cin >> temp;
        cout << "enter humidity of day" << i << endl;
        cin >> humid;
        sum_of_temp = sum_of_temp + temp;
        sum_of_humid = sum_of_humid + humid;
        avg_temp = sum_of_temp /5;
        avg_humid = sum_of_humid/5;
    }
    cout<<"Average temp is "<<avg_temp<<endl;
    cout<<"average humid is "<<avg_humid;

    
}