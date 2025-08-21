#include <cmath>
#include <iostream>

int main()
{
  int extrabits;
  int arrindex = 0;
  int bitsarr[32];
  int bitvalues = 0;
  int octet = 1;
  std::string allvalues[7];
  for (int i = 0; i < 32; i++)
  {
    if (i >= 8)
    {
      extrabits = (i - 8) % 8;
    }
    else
    {
      extrabits = i;
    }

    std::cout << "Enter the bit " << extrabits << " of octet " << octet << std::endl;
    std::cin >> bitsarr[extrabits];
    if (bitsarr[extrabits] == 1)
    {
      bitvalues = int(pow(2, extrabits)) + bitvalues;
    }

    if (extrabits == 7)
    {
      std::cout << "OCTET COMPLETED" << std::endl;
      allvalues[arrindex] = std::to_string(bitvalues);
      arrindex += 2;
      if (arrindex <= 6)
      {
        allvalues[arrindex - 1] = ".";
      }
      octet++;
      bitvalues = 0;
    }
  }

  std::cout << "FULL IP IS " << std::endl;
  for (int i = 0; i < 7; i++)
  {
    std::cout << allvalues[i];
  }
}