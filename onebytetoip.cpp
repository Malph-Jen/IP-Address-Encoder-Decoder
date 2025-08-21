#include <iostream>
#include <string>
#include <cmath>

int main() {
    int arrindex = 0;
    std::string allvalues[7];

    for (int octet = 1; octet <= 4; octet++) {
        std::string input;
        int bitvalues = 0;

        std::cout << "Enter 8 bits for octet " << octet << " (e.g. 11000000): ";
        std::cin >> input;

        if (input.size() != 8) {
            std::cout << "Error: You must enter exactly 8 bits!\n";
            return 1;
        }

        for (int i = 0; i < 8; i++) {
            int bit = input[i] - '0';
            if (bit == 1) {
                bitvalues += int(pow(2, i));
            }
        }

        allvalues[arrindex] = std::to_string(bitvalues);
        arrindex += 2;
        if (arrindex <= 6) {
            allvalues[arrindex - 1] = ".";
        }
    }

    std::cout << "FULL IP IS: ";
    for (int i = 0; i < 7; i++) {
        std::cout << allvalues[i];
    }
    std::cout << std::endl;

    return 0;
}
