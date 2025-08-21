#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    int value[4];
    int chart[] = {128, 64, 32, 16, 8, 4, 2, 1};
    int bits[7];
    std::string bitsarr[4];
    std::string bitsdots[4] = {".", ".", "."};

    std::cout << "Enter all of the octets values below " <<std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cin >> value[i];
        for (int n = 0; n < 8; n++)
        {
            if (value[i] >= chart[n])
            {
                value[i] = value[i] - chart[n];
                bits[n] = 1;
                bitsarr[i].append(std::to_string(bits[n]));
            }
            else
            {
                bits[n] = 0;
                bitsarr[i].append(std::to_string(bits[n]));
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << bitsarr[i];
        std::cout << bitsdots[i];
    }

    return 0;
}
