# IP ↔ Bits Converter (C++)

A simple console-based C++ program that converts IPv4 addresses between **binary (bits)** and **dotted-decimal format**.  
Useful for learning how IP addresses are represented in both forms.

---

## 🔧 Compilation

You can compile with **g++** or any C++ compiler:


g++ file_name.cpp -o ip_converter
Run the program after compiling: ./ip_converter


1️⃣ Bits → IP

Enter 4 groups of 8 bits (one group per line).

Each group represents one octet.

Example input:

11000000

10101000

00000001

00000001
>>Output:
FULL IP IS: 192.168.1.1


2️⃣ IP → Bits

Enter 4 decimal values (0–255), one for each octet.

Example input:

192

168

1

1
>>Output:
11000000.10101000.00000001.00000001



📚 Notes

Works with standard IPv4 (32-bit addresses).

No external libraries needed.

Just compile and run in any C++ environment.
