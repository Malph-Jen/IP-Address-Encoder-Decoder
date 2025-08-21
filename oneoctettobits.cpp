#include <iostream>

int main(){
    int value;
    int subtractedvalue;
    int bits[7];
    int chart[] = {128, 64, 32, 16, 8, 4, 2, 1};
    std::cout << "Enter the digit for converting to bits" << std::endl;
    std::cin >> value;

    for (int i = 0; i < 8; i++) {
        if (value >= chart[i]) {
            value = value - chart[i];
            bits[i] = 1;
        }
        else {
            bits[i] = 0;
        }
    }

    for (int i = 0; i < 8; i++) {
        std::cout << bits[i];
    }
}