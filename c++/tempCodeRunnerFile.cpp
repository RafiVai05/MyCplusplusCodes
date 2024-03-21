#include <iostream>

using namespace std;

int main() {
    int num, digit, count;

    cout << " input any number : ";
    cin >> num;



    int freq[10] = {0};


    while (num != 0) {
        digit = num % 10;
        freq[digit]++;
        num = num/10;
    }



    for (int i = 0; i < 10; i++) {
        cout << "Frequency of  " << i << " = " << freq[i] << endl;
    }

    return 0;
}