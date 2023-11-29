// ====================================================================== //
// ============================= Problem 01 ============================= //
// ======================== Simple Multiplication ======================= //
// #include <iostream>
// using namespace std;

// int simple_multiplication(int number)
// {
//     return (number % 2 == 0) ? number * 8 : number * 9;
// }

// int main()
// {

//     int number;
//     cout << "Please enter a number: ";
//     cin >> number;

//     cout << "\nThe result of Multiplication is: " << simple_multiplication(number);

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 02 ============================= //
// ========================= Century From Year ========================== //
// #include <iostream>
// using namespace std;

// short century_func(short year)
// {
//     if (year % 100 == 0)
//     {
//         return (year / 100);
//     }
//     else
//     {
//         return (year / 100) + 1;
//     }
// }

// int main()
// {
//     short year;
//     cout << "Please enter a year: ";
//     cin >> year;

//     cout << "The century according to the inserted year is: " << century_func(year) << endl;

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 03 ============================= //
// ====================================================================== //
// #include <iostream>
// #include <string>
// using namespace std;

// string div_func(short n, short x, short y)
// {
//     if (n % x == 0 && n % y == 0)
//     {
//         return "True because " + to_string(n) + " is divisible by " + to_string(x) + " and " + to_string(y);
//     }
//     else if (n % x == 0 && n % y != 0)
//     {
//         return "False because " + to_string(n) + " is not divisible by " + to_string(y);
//     }
//     else if (n % x != 0 && n % y == 0)
//     {
//         return "False because " + to_string(n) + " is not divisible by " + to_string(x);
//     }
//     else 
//     {
//         return "False because " + to_string(n) + " is neither divisible by " + to_string(x) + " nor " + to_string(y);
//     }
// }

// int main()
// {
//     int n, x, y;

//     cout << "Please enter a number (n) to checks if it is divisible by two numbers (x) & (y): " << endl;
//     cin >> n >> x >> y;

//     cout << div_func(n, x, y) << endl;

//     return 0;
// }