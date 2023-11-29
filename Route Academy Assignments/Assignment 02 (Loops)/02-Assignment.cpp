//// ======================================================================= //
//// ============================ Assignment 02 ============================ //

//// ======================================================================= //
//// ============================= Question 01 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {
//     short num;

//     // ===== while Loop ===== //
//     num = 10;

//     while (num != 0)
//     {
//         cout << num << " ";
//         --num;
//     }
//     cout << endl;

//     // ===== For Loop ===== //
//     num = 10;

//     for (short i = num; i > 0; i--)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     // ===== do while Loop ===== //
//     num = 10;

//     do
//     {
//         cout << num << " ";
//         num--;
//     } while (num != 0);

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 02 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {
//     float number, sum = 0;

//     cout << "PLease insert 10 numbers: " << endl;

//     for (short i = 1; i <= 10; i++)
//     {
//         cin >> number;

//         sum += number;
//     }

//     cout << "\n=============================================================\n";
//     cout << "The average of the all inserted numbers is: " << sum / 10;
//     cout << "\n=============================================================\n\n";

// return 0;
// }

//// ======================================================================= //
//// ============================= Question 03 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {

//     int number;

//     cout << "\nPlease enter an integer number: ";
//     cin >> number;

//     cout << "\n============================================================" << endl;
//     cout << "============== The multiplication table of " << "(" << number << ") =============";
//     cout << "\n============================================================" << endl;

//     for (short i = 1; i <= 12; i++)
//     {
//         cout << i << " * " << number << " = " << i * number << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 04 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {

//     int N, M;
//     cout << "Please insert two integers N & M: " << endl;
//     cin >> N >> M;

//     if (N == M)
//     {
//         cout << "Both numbers are the same. No numbers between them to sum.\n";
//     }
//     else
//     {
//         int SUM = 0;

//// to put the small number always as a start for the loop

//         int start = (N > M) ? M : N;
//         int end = (N > M) ? N : M;

//         for (int i = start; i <= end; i++)
//         {
//             SUM += i;
//         }
//         cout << "\n============================================================" << endl;
//         cout << "The summation of all numbers from " << N << " to " << M << " is: " << SUM;
//         cout << "\n============================================================" << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 05 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {

//     int number, sum = 0;

//     cout << "Please insert infinite integers .. To stop, enter a negative number: \n";

//     while (cin >> number)
//     {
//         if (number < 0)
//         {
//             break;
//         }

//         sum += number;
//     }

//     cout << "\n============================================================" << endl;
//     cout << " The summation of all inserted integers is: " << sum << endl;
//     cout << "============================================================\n" << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 06 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {

//     int number, max_number = 0;

//     cout << "Please insert infinite integers .. To stop, enter a negative number: \n";

//     while (cin >> number)
//     {
//         if (number < 0)
//         {
//             break;
//         }
//         if (number >= max_number)
//         {
//             max_number = number;
//         }
//     }

//     cout << "\n============================================================" << endl;
//     cout << " The maximum integer is: " << max_number;
//     cout << "\n============================================================" << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 07 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {

//     int number, steps = 0;

//     cout << "\nPlease enter a number: ";
//     cin >> number;

//     while (number != 0)
//     {
//         if (number > 0)
//         {
//             if (number % 2 != 0)
//             {
//                 --number;
//             }
//             else
//             {
//                 number /= 2;
//             }
//         }
//         else
//         {
//             if (number % 2 != 0)
//             {
//                 ++number;
//             }
//             else
//             {
//                 number /= 2;
//             }
//         }

//         ++steps;
//     }

//     cout << "\n============================================================" << endl;
//     cout << "Count of steps to reach zero are " << "(" << steps << ")" << " steps.";
//     cout << "\n============================================================" << endl;
//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 08 ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {

//     short base, exponent;
//     double result = 1;

//     cout << "\nPlease enter the base number: ";
//     cin >> base;

//     cout << "\nPlease enter the exponent number: ";
//     cin >> exponent;

//     // To handle the positive exponent
//     if (exponent > 0)
//     {
//         for (short i = 0; i < exponent; i++)
//         {
//             result *= base;
//         }
//     }
//     // To handle the negative exponent
//     else
//     {
//         for (short i = 0; i > exponent; i--)
//         {
//             result *= (1.0 / base);
//         }
//     }

//     cout << "\n=============================================================" << endl;
//     cout << " The result of " << base << " ^ " << exponent << " = " << result << endl;
//     cout << "=============================================================" << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 09 ============================= //

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     short counter = 0, count_odd = 0, count_even = 0;

//     cout << "Please insert 10 numbers to count the odd numbers:\n" << endl;

//     while (counter < 10)
//     {
//         cin >> number;

//         if (number % 2 != 0)
//         {
//             ++count_odd;
//         }
//         else
//         {
//             ++count_even;
//         }

//         ++counter;
//     }

//     cout << "\nCount of the odd numbers is: " << count_odd << endl;
//     cout << "\nCount of the even numbers is: " << count_even << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 10 ============================= //

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, gcd;

//     cout << "Please insert two integer numbers: \n" << endl;
//     cin >> num1 >> num2;

//     // to convert the inserted negative numbers to positive
//     num1 = (num1 < 0) ? -num1 : num1;
//     num2 = (num2 < 0) ? -num2 : num2;

//     if (num1 == 0 || num2 == 0)
//     {
//         gcd = (num1 > 0) ? num1 : num2;
//     }
//     else
//     {
//         for (int i = 1; i <= num1 && i <= num2; i++)
//         {
//             if (num1 % i == 0 && num2 % i == 0)
//             {
//                 gcd = i;
//             }
//         }
//     }

//     cout << "\nGCD(" << num1 << ", " << num2 << ") = " << gcd << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================= Question 11 ============================= //

#include <iostream>
using namespace std;
int main()
{

    int number, max = INT_MIN, second_max;

    cout << "Please insert 10 numbers to find the second max number:" << endl;

    for (short i = 1; i <= 10; i++)
    {
        cin >> number;

        if (number > max)
        {
            second_max = max;
            max = number;
        }
        else if (number < max && number > second_max)
        {
            second_max = number;
        }
    }

    cout << "\nThe maximum number is: " << max << endl;
    cout << "\nThe second maximum number is: " << second_max << endl;

    return 0;
}

//// ======================================================================= //
//// ============================= Question 12 ============================= //
//// ============= convert a binary number to a decimal number ============= //

// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;
// int main()
// {
//     int binary, number = 0;
//     short i = 0;
//     cout << "Please insert a binary number: ";
//     cin >> binary;

//     // while (binary != 0)
//     // {
//     //     number += (binary % 10) * pow(2, i);
//     //     i++;
//     //     binary /= 10;
//     // }

//     for (int i = 1; binary != 0; i *= 2)
//     {
//         number += (binary % 10) * i;
//         binary /= 10;
//     }

//     cout << number << endl;
//     return 0;
// }
//// ======================================================================= //
//// ============================= Question 13 ============================= //
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