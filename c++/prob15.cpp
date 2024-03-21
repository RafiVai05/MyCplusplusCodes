#include <iostream>

int main() {
    int digits[] = {1, 2, 3, 4};
    int count = 0;

    std::cout << "The three-digit numbers are:" << std::endl;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j == i) continue;
            for (int k = 0; k < 4; ++k) {
                if (k == i || k == j) continue;
                std::cout << digits[i] << digits[j] << digits[k] << " ";
                ++count;
            }
        }
    }

    std::cout << "\nTotal number of the three-digit numbers are: " << count << std::endl;

    return 0;
}
