#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter an integer number: ";
        cin >> num;

        bool isPrime = true;

        
        for (int j = 2; j <= num/2; j++) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        }

       if (num ==1 || num== 0)
       {cout<<"neither comp nor prime";}

        if (isPrime)
            cout << num << " is prime." << endl;
        else
            cout << num << " is not prime." << endl;
    }

    return 0;
}
