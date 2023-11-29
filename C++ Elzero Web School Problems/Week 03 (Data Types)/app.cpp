#include <iostream>
#include <limits>
#include <cmath>
#include <typeinfo>

using namespace std;

int main()
{
// ################################################################################
// #################################### Task 01 ###################################
// ################################################################################

// cout << "#########################################################" << endl;
// cout << "########### App To Convert ASCII <> Character ###########" << endl;
// cout << "#########################################################" << endl;

// char userInput;
// cout << "For ASCII Converter Input 1 ... For Character Converter Input 2" << endl;
// cin >> userInput;

// if (userInput == '1')
// {
//     short value;
//     cout << "Please Enter The ASCII Value: " << endl;
//     cin >> value;
//     cout << char(value) << endl;
// } else {
//     char character;
//     cout << "Please Enter The Character: " << endl;
//     cin >> character;
//     cout << int(character) << endl;
// }
// ################################################################################
// #################################### Task 02 ###################################
// ################################################################################
// double salary = 5000.98;
// cout << sizeof(salary) << " Bytes" << endl;
// cout << 8 * sizeof(salary) << " Bits" << endl;
// ################################################################################
// #################################### Task 03 ###################################
// ################################################################################
// cout << "Maximum Integer Number Is => " << numeric_limits<int>::max() << endl;
// cout << INT_MAX << endl;
// cout << "Minimum Integer Number Is => " << numeric_limits<int>::min() << endl;
// cout << INT_MIN << endl;
// cout << "Maximum Short Integer Number Is => " << numeric_limits<short>::max()<< endl;
// cout << "Minimum Short Integer Number Is => " << numeric_limits<short>::min()<< endl;
// ################################################################################
// #################################### Task 04 ###################################
// ################################################################################
// Edit Line To Make 8 Become 4
// cout << sizeof(float(10.5 + 5 + 20.5 + 10)) << "\n";
// cout << sizeof(10.5 + 5 + 20.5 + 10) << "\n";
// ################################################################################
// #################################### Task 05 ###################################
// ################################################################################
// char a = '~';
// char b = '&';
// char c = '%';
// char d = 'A';

// cout << "ASCII Value of ~ Is " << (int) a << endl;
// cout << "ASCII Value of & Is " << (int) b << endl;
// cout << "ASCII Value of % Is " << (int) c << endl;
// cout << "ASCII Value of A Is " << (int) d << endl;
// ################################################################################
// #################################### Task 06 ###################################
// ################################################################################
// int a = 69;
// int b = 108;
// int c = 122;
// int d = 101;
// int e = 114;
// int f = 111;

// // Output Needed
// cout << "Character Of This ASCII Value 69 Is " << (char) a << endl;
// cout << "Character Of This ASCII Value 108 Is " << (char) b << endl;
// cout << "Character Of This ASCII Value 122 Is " << (char) c << endl;
// cout << "Character Of This ASCII Value 101 Is " << (char) d << endl;
// cout << "Character Of This ASCII Value 114 Is " << (char) e << endl;
// cout << "Character Of This ASCII Value 111 Is " << (char) f << endl;
// cout << a << b << c << d << e << f << endl;
// cout << (char)a << (char)b << (char)c << (char)d << (char)e << (char)f << endl;
// ################################################################################
// #################################### Task 07 ###################################
// ################################################################################
// int a = 1;
// int b = 13;
// int c = 17;
// int d = 70;

// cout << "Character Of This ASCII Value 69 Is " << (char) (d - a) << endl;
// cout << "Character Of This ASCII Value 87 Is " << (char) (c + d) << endl;
// cout << "Character Of This ASCII Value 83 Is " << (char) (b + d) << endl;

// cout << (char) (d - a) << (char) (c + d) << (char) (b + d) << endl;
// ################################################################################
// #################################### Task 08 ###################################
// ################################################################################
// // Edit Anything Except Values
// short a = 100;
// double b = 15001500;
// long double c = 100.54565746;

// // Do Not Edit
// cout << sizeof(a) << " Bytes\n"; // 2 Bytes
// cout << sizeof(b) << " Bytes\n"; // 8 Bytes
// cout << sizeof(c) << " Bytes\n"; // 16 Bytes
// ################################################################################
// #################################### Task 09 ###################################
// ################################################################################
// Edit Anything Except Values
// unsigned int a = 100;
// signed int b = -100;
// short c = 100;
// float d = 500.55f;

// // Do Not Edit
// cout << a << "\n"; // 100
// cout << b << "\n"; // -100
// cout << c << "\n"; // 100
// cout << d << "\n"; // 500.55
// ################################################################################
// #################################### Task 10 ###################################
// ################################################################################
// // Add Type Alias Here
// using lli = long long int;
// typedef long long int lli;

// // Do Not Edit
// lli num = 150050005; // This Is Long Long Int
// cout << num << "\n"; // 150050005
// ################################################################################
// #################################### Task 11 ###################################
// ################################################################################
// // Do Not Edit Here
// short int a = 100;
// float b = 98.5f;
// double c = 1.7;

// // Edit This Line And Use Type Casting To Get The Output
// cout << int (a + b + c) << "\n"; // 200
// cout << typeid(int(a + b + c)).name() << endl;
// ################################################################################
// #################################### Task 12 ###################################
// ################################################################################
// Do Not Edit Here
// short a = 1000;
// int b = 10000;
// long double c = 5.560000505012;

// // Change ??? To Something Else To Get The Output
// cout << (b / a) - (-round((b / a) / c)) << "\n"; // 12
// cout << (b / a) - (-((b / a) / int (c))) << "\n"; // 12

// cout << (b / a) + (b / a) << "\n"; // 20
// cout << round ((b / a) / c) * (round((b / a) + c)) << "\n"; // 32
// cout << a * (int) c << "\n"; // 5000
// cout << char(((b / a) * round(c)) + ((b / a) + (b / a))) << "\n"; // P

return 0;
}