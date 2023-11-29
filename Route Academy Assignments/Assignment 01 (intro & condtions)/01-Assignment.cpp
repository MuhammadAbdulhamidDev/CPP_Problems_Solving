// #################################################################
// ######################### Assignment 01 #########################

// #################################################################
// ########################## Question 01 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     int num;

//     cout << "Please enter an integer number: " << endl;

//     cin >> num;

//     cout << "Your integer number is: " << num << endl;

//     return 0;
// }

// #################################################################
// ########################## Question 02 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     int first_num, second_num, third_num, result;

//     cout << "Please enter the first number: \n";
//     cin >> first_num;

//     cout << "Please enter the second number: \n";
//     cin >> second_num;

//     cout << "Please enter the third number: \n";
//     cin >> third_num;

//     result = first_num + second_num + third_num;
//     cout << "Summation of 3 integers numbers is " << result;

//     return 0;
// }

// #################################################################
// ########################## Question 03 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     int first_num, second_num, third_num;
//     float result;

//     cout << "Please enter the first number: \n";
//     cin >> first_num;

//     cout << "Please enter the second number: \n";
//     cin >> second_num;

//     cout << "Please enter the third number: \n";
//     cin >> third_num;

//     result = (first_num + second_num + third_num) / 3.0;
//     cout << "The average of 3 integers numbers is " << result;

//     return 0;
// }

// #################################################################
// ########################## Question 04 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     int width, height, perimeter, area;

//     cout << "Please enter the width of rectangle: \n";
//     cin >> width;

//     cout << "Please enter the height of rectangle: \n";
//     cin >> height;

//     perimeter = 2 * (width + height);
//     area = width * height;

//     cout << "The perimeter of the rectangle is: " << perimeter << endl;
//     cout << "The area of the rectangle is: " << area << endl;

//     return 0;
// }

// #################################################################
// ########################## Question 05 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     short num, rem, sum = 0;
//     cout << "Please enter a 3-digit number: \n";
//     cin >> num;

//     // rem = num % 10;
//     // num /= 10;
//     // sum += rem;

//     // rem = num % 10;
//     // num /= 10;
//     // sum += rem;

//     // rem = num % 10;
//     // num /= 10;
//     // sum += rem;

//     while(num != 0) {
//         rem = num % 10;
//         num /= 10;
//         sum += rem;
//     }

//     cout << "The sum of the digits of the inserted 3-digit number is: " << sum << endl;

//     return 0;
// }

// #################################################################
// ########################## Question 06 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, hours, minutes, seconds;

//     cout << "Please enter an integer number in seconds: ";
//     cin >> num;

//     hours = num / 3600;
//     minutes = (num % 3600) / 60;
//     seconds = (num % 3600) % 60;

//     cout << "H:M:S - " << hours << ":" << minutes << ":" << seconds << endl;

//     return 0;
// }

// #################################################################
// ########################## Question 07 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     int num;
//     cout << "Please enter an integer number: ";
//     cin >> num;

//     if(num < 0) {
//         cout << "It's a negative number." << endl;
//     } else if (num > 0) {
//         cout << "It's a positive number." << endl;
//     } else {
//        cout << " It's Zero!"
//    }

//     return 0;
// }

// #################################################################
// ########################## Question 08 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     short digit;
//     cout << "Please enter any digit from 1 to 5: ";
//     cin >> digit;

//     switch (digit)
//     {
//         case 1:
//             cout << "One";
//             break;
//         case 2:
//             cout << "Two";
//             break;
//         case 3:
//             cout << "Three";
//             break;
//         case 4:
//             cout << "Four";
//             break;
//         case 5:
//             cout << "Five";
//             break;
//         default:
//             cout << "Please enter a digit in the range of (1 to 5).";
//     }

//         // ========== a solution with using Ternary Operator ========== //
//         // string result =    digit == 1 ? "One"
//         //                  : digit == 2 ? "Two"
//         //                  : digit == 3 ? "Three"
//         //                  : digit == 4 ? "Four"
//         //                  : digit == 5 ? "Five"
//         //                  : "Please enter a digit in the range of (1 to 5).";
//         // cout << result << endl;

//     return 0;
// }

// #################################################################
// ########################## Question 09 ##########################

// #include <iostream>
// using namespace std;
// int main() {

//     int first_num, second_num, third_num, fourth_num, fifth_num, sum = 0;

//     cout << "Please enter 5 numbers: \n";
//     cin >> first_num >> second_num >> third_num >> fourth_num >> fifth_num;

//// cin >> num;
//// if (num % 2 != 0)
//// {
////     sum += num;
//// }
//// cin >> num;
//// if (num % 2 != 0)
//// {
////     sum += num;
//// }
//// cin >> num;
//// if (num % 2 != 0)
//// {
////     sum += num;
//// }
//// cin >> num;
//// if (num % 2 != 0)
//// {
////     sum += num;
//// }
//// cin >> num;
//// if (num % 2 != 0)
//// {
////     sum += num;
//// }
//     if (first_num % 2 != 0) {
//         sum += first_num;
//     }
//     if (second_num % 2 != 0) {
//         sum += second_num;
//     }
//     if (third_num % 2 != 0) {
//         sum += third_num;
//     }
//     if (fourth_num % 2 != 0) {
//         sum += fourth_num;
//     }
//     if (fifth_num % 2 != 0) {
//         sum += fifth_num;
//     }

//     cout << "Sum of all odd values is: " << sum;

//     return 0;
// }

// #################################################################
// ########################## Question 10 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {

//     short year;
//     cout << "Please enter a year to check if it's a leap year or not: ";
//     cin >> year;

// if (year % 100 == 0)
// {
//     if (year % 400 == 0)
//     {
//         cout << "It's a leap year." << endl;
//     }
//     else
//     {
//         cout << "It's not a leap year." << endl;
//     }
// }
// else
// {
//     if (year % 4 == 0 && year % 100 != 0)
//     {
//         cout << "It's a leap year." << endl;
//     }
//     else
//     {
//         cout << "It's not a leap year." << endl;
//     }
// }

// if (year % 100 == 0 && year % 400 == 0)
// {
//     cout << "It's a leap year." << endl;
// }
// else if (year % 4 == 0 && year % 100 != 0)
// {
//     cout << "It's a leap year." << endl;
// }
// else
// {
//     cout << "It's a not leap year." << endl;
// }

// if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
// {

//     cout << "It's a leap year." << endl;
// }
// else
// {
//     cout << "It's not a leap year." << endl;
// }

//     return 0;
// }

// #################################################################
// ########################## Question 11 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     short birth_year, current_year = 2023, age;

//     cout << "Please enter your birth year: ";
//     cin >> birth_year;

//     age = current_year - birth_year;

//     if (age > 18) {
//         cout << "Your age is above 18 years old.";
//     }
//     else if (age < 18) {
//         cout << "Your age is below 18 years old.";
//     }
//     else {
//         cout << "Your age is 18 years old.";
//     }

//     return 0;
// }

// #################################################################
// ########################## Question 12 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     short mark;
//     cout << "Please enter your mark to know your grade: ";
//     cin >> mark;

//     if (mark < 25 && mark > 0) {
//         cout << "Your grade is: F";
//     } else if (mark >= 25 && mark < 45) {
//         cout << "Your grade is: E";
//     } else if (mark >= 45 && mark < 50) {
//         cout << "Your grade is: D";
//     } else if (mark >= 50 && mark < 60) {
//         cout << "Your grade is: C";
//     } else if (mark >= 60 && mark <= 80) {
//         cout << "Your grade is: B";
//     } else if (mark <= 100) {
//         cout << "Your grade is: A";
//     } else {
//         cout << "Your grade is out of range!" << endl;
//     }

//     return 0;
// }

// #################################################################
// ########################## Question 13 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     short num;
//     cout << "Please enter a number between 1 to 12 to get the month name: ";
//     cin >> num;

//     switch (num)
//     {
//         case 1:
//             cout << "The month name is: January";
//             break;
//         case 2:
//             cout << "The month name is: February";
//             break;
//         case 3:
//             cout << "The month name is: March";
//             break;
//         case 4:
//             cout << "The month name is: April";
//             break;
//         case 5:
//             cout << "The month name is: May";
//             break;
//         case 6:
//             cout << "The month name is: June";
//             break;
//         case 7:
//             cout << "The month name is: July";
//             break;
//         case 8:
//             cout << "The month name is: August";
//             break;
//         case 9:
//             cout << "The month name is: September";
//             break;
//         case 10:
//             cout << "The month name is: October";
//             break;
//         case 11:
//             cout << "The month name is: November";
//             break;
//         case 12:
//             cout << "The month name is: December";
//             break;
//         default:
//             cout << "Please enter a number in the given range.";
//     }

//     return 0;
// }

// #################################################################
// ########################## Question 14 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Please enter an integer number to check it's an even or an odd: ";
//     cin >> num;

//     // ========== direct solution ========== //
//     cout << ((num % 2 == 0) ? "This number is: Even" : "This number is: Odd");

//     // // ========== another solution ========== //
//     // string result = (num % 2 == 0) ? "This number is: Even" : "This number is: Odd";
//     // cout << result;

//     return 0;
// }

// #################################################################
// ########################## Question 15 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     char CHAR;
//     cout << "Please enter a character to check it's a vowel or a consonant: ";
//     cin >> CHAR;

//     if (int(CHAR) >= 65 || int(CHAR) >= 122)
//     {
//         switch (CHAR)
//         {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             cout << "This is a vowel character." << endl;
//             break;
//         default:
//             cout << "This is a consonant character." << endl;
//         }
//     }
//     else
//     {
//         cout << "PLease enter a letter!" << endl;
//     }

//     return 0;
// }

// #################################################################
// ########################## Question 16 ##########################

// #include <iostream>
// using namespace std;
// int main()
// {
//     int first_num, second_num, third_num, max_element, min_element;

//     cout << "Please enter three integer numbers: " << endl;
//     cin >> first_num >> second_num >> third_num;

//     // ========== To find the max element ========== //
//     if (first_num >= second_num && first_num >= third_num)
//     {
//         max_element = first_num;
//     }
//     else if (second_num >= first_num && second_num >= third_num)
//     {
//         max_element = second_num;
//     }
//     else
//     {
//         max_element = third_num;
//     }

//     cout << "The max element is: " << max_element << endl;

//     // ========== To find the min element ========== //
//     if (first_num <= second_num && first_num <= third_num)
//     {
//         min_element = first_num;
//     }
//     else if (second_num <= first_num && second_num <= third_num)
//     {
//         min_element = second_num;
//     }
//     else
//     {
//         min_element = third_num;
//     }

//     cout << "The min element is: " << min_element << endl;

//     return 0;
// }