//// ======================================================================= //
//// ======================== Bonus (Assignment 02) ======================== //

//// ======================================================================= //
//// ============================= Question 01 ============================= //
//// ============= convert a decimal number to a binary number ============= //

//// ========================= Solution with array ========================= //
// #include <iostream>
// #include <string>

// using namespace std;
// int main()
// {
//     int decimal_number, remainder;
//     cout << "Please insert a decimal number: ";
//     cin >> decimal_number;

//     char binary_arr[32] = {};

//     cout << "The binary number for " << decimal_number << " is : ";

//     for (int i = 31; i >= 0; i--)
//     {
//         remainder = decimal_number % 2;
//         binary_arr[i] = char(remainder) + '0';
//         decimal_number /= 2;
//     }
//     for (int i = 0; i <= 31; i++)
//     {
//         cout << binary_arr[i];
//     }

//     return 0;
// }

//// ================== Solution with string & concatenation ================== //
// #include <iostream>
// #include <string>

// using namespace std;
// int main()
// {
//     int decimal_number, rem;
//     cout << "Please insert a decimal number: ";
//     cin >> decimal_number;

//     string binary_number = "";

//     while (decimal_number != 0)
//     {
//         binary_number = to_string(decimal_number % 2) + binary_number;
//         decimal_number /= 2;
//     }
//     cout << "The binary number is: " << ((binary_number == "") ? "0" : binary_number) << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 02 ============================= //
//// ============================= Palindrome ============================== //
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, on_the_right, rev = 0;
//     cout << "Please insert a number: ";
//     cin >> num;

//     int original = num;

//     while (num != 0)
//     {
//         on_the_right = num % 10;
//         num = num / 10;
//         rev = (rev * 10) + on_the_right;
//     }

//     if (original == rev)
//     {
//         cout << "Palindrom!" << endl;
//     }
//     else
//     {
//         cout << "Not Palindrom!" << endl;
//     }

//     return 0;
// }
//// ======================================================================= //
//// ============================= Question 03 ============================= //
//// ================== Even, Odd, Positive and Negative =================== //
// #include <iostream>
// using namespace std;
// int main()
// {
//     int numbers, number, even = 0, odd = 0, positive = 0, negative = 0;

//     cout << "How many numbers do you want to check? ";
//     cin >> numbers;

//     cout << "Please insert " << numbers << " numbers: " << endl;

//     for (int i = 1; i <= numbers; i++)
//     {
//         cin >> number;

//         if (number % 2 == 0)
//         {
//             even++;
//         }
//         else {
//             odd++;
//         }

//         if (number > 0)
//         {
//             positive++;
//         }
//         else if(number < 0)
//         {
//             negative++;
//         }
//     }

//     cout << "Even: " << even << endl;
//     cout << "Odd: " << odd << endl;
//     cout << "Positive: " << positive << endl;
//     cout << "Negative: " << negative << endl;

//     return 0;
// }