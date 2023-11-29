//// ======================================================================= //
//// ============================ Question 01 ============================== //
//// Write a program that allows the user to insert 2 integers then print the max //
// #include <iostream>
// using namespace std;

// int main()
// {
// int num1, num2;

// // Prompt the user to enter the first integer
// cout << "Enter the first integer: ";
// cin >> num1;

// // Prompt the user to enter the second integer
// cout << "Enter the second integer: ";
// cin >> num2;

// int max = {};

// // Use a switch statement to find the maximum
// switch (num1 > num2)
// {
// case true:
//     max = num1;
//     break;
// case false:
//     max = num2;
//     break;
// }

// cout << "The maximum is: " << max << std::endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 09 ============================== //
//// ==== print the odd numbers from 1 to 101, and also to display their sum //
// #include <iostream>
// using namespace std;
// int main()
// {

// short start = 1, end = 101, sum = 0, counter = 0;

// for (short i = start; i <= end; i++)
// {
//     if (i % 2 != 0) {
//         cout << i << endl;
//         sum += i;
//         ++counter;
//     }
// }
// cout << "\nThe count of odd numbers is : " << counter << endl;
// cout << "\nThe Summation of all odd numbers is : " << sum << endl;

//     return 0;
// }

//======================================================================================//
//======================================================================================//

// #include <iostream>
// using namespace std;

// int main()
// {
//     // ====================== check if the number is prime or not ======================= //

//     short num, counter = 0;

//     cout << "Please enter an integer number: ";
//     cin >> num;

//     for (short i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             ++counter;
//         }
//     }

//     if (counter == 2)
//     {
//         cout << "\nThis number is prime number.\n" << endl;
//     }
//     else
//     {
//         cout << "\nThis number is not prime number.\n" << endl;
//     }

//     return 0;
// }

//======================================================================================//
//======================================================================================//

// #include <iostream>
// using namespace std;
// int main()
// {
//     //// ========================= print the digits of an integer ========================= //

//     int num;
//     short rem;

//     cout << "Please enter an integer number: ";
//     cin >> num;

//     while (true)
//     {
//         rem = num % 10;
//         cout << rem << endl;
//         num /= 10;

//         if (num == 0)
//         {
//             break;
//         }
//     }

//     return 0;
// }

//======================================================================================//
//======================================================================================//

// #include <iostream>
// using namespace std;
// int main()
// {
//     // =========== Write a program to calculate the sum of: 1^2 + 2^2 + 3^2 + … + Ν^2 ========== //

//     int start = 1, end;
//     long sum = 0;

//     cout << "Please enter a value for the end of the range: ";
//     cin >> end;

//     for (int i = start; i <= end; i++)
//     {
//         sum = sum + (i * i);
//     }

//     cout << "Sum of squares from " << start << " to " << end << " is: " << sum << endl;

//     return 0;
// }

//======================================================================================//
//======================================================================================//

// #include <iostream>
// using namespace std;
// int main()
// {
//     // ================ write a program that reverse an integer =================== //

//     int num, rev = 0;
//     short rem;
//     cout << "Please enter an integer number : ";
//     cin >> num;

//     while (num != 0) {
//         rev = rev * 10 + (num % 10);
//         // rem = num % 10;
//         num = num / 10;
//         // cout << rem;
//     }

//     cout << rev << endl;

//     return 0;
// }

// ====================================================================================== //
// ====================================================================================== //
// ====================================================================================== //

// #include <iostream>
// using namespace std;

// int sum(int x, int y)
// {
//     return x + y;
// }

// int sum(int x, int y, int z)
// {
//     return x + y + z;
// }

// int main()
// {
//     // int x, y, z;

//     // cout << "Please enter three integers numbers: " << endl;
//     // cin >> x >> y >> z;

//     // cout << x << " + " << y << " = " << sum(x, y) << endl;
//     // cout << x << " + " << y << " + " << z << " = " << sum(x, y, z) << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== Find Prime Numbers ===========================
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n1, n2;
//     short prime = 0, count;

//     cout << "Please enter two integers numbers: " << endl;
//     cin >> n1 >> n2;

//     for (short i = n1; i <= n2; i++)
//     {
//         count = 0;
//         for (short j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count++;
//             }
//         }

//         if (count == 2)
//         {
//             cout << i << " = Prime" << endl;
//             ++prime;
//         }
//         else
//         {
//             cout << i << " = Not Prime" << endl;
//         }
//     }

//     cout << "The number of prime number between N1 & N2 is: " << prime << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== How Many Divisors ============================
// #include <iostream>
// using namespace std;
// int main()
// {
//     short n, counter;
//     cout << "Please enter a number: ";
//     cin >> n;

//     for (short i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ++counter;
//             cout << i << endl;
//         }
//     }

//     cout << "Count of the divisors does number n has: " << counter << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================
// #include <iostream>
// using namespace std;
// int main()
// {

//     short l;
//     cout << "Please enter the length of the square: ";
//     cin >> l;

//     for (short i = 1; i <= l; i++) {
//         for (short j = 1; j <= l; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//         return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================

// #include <iostream>
// using namespace std;
// int main()
// {
//     short l;
//     cout << "Please enter the length of the square: ";
//     cin >> l;

//     for (short i = 1; i <= l; i++)
//     {
//         for (short j = 1; j <= l; j++)
//         {
//             if (i == 1 || i == l || j == 1 || j == l)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//                 }
//         cout << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================

// #include <iostream>
// using namespace std;
// int main()
// {
//     short h;
//     cout << "Please enter a number (h): ";
//     cin >> h;

//     for (short i = 1; i <= h; i++)
//     {
//         for (short j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================

// #include <iostream>
// using namespace std;
// int main()
// {
//     short h;
//     cout << "Please enter a number (h): ";
//     cin >> h;

//     for (short i = h; i >= 1; i--)
//     {
//         for (short j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================
// #include <iostream>
// using namespace std;
// int main()
// {
//     short h;
//     cout << "Please enter a number (h): ";
//     cin >> h;

//     for (short i = 1; i <= h; i++)
//     {
//         for (short j = 1; j <= i; j++)
//         {
//             if (i == h || j == 1 || i == j)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================
// #include <iostream>
// using namespace std;
// int main()
// {
//     short h;
//     cout << "Please enter a number (h): ";
//     cin >> h;

//     for (short i = 1; i <= h; i++)
//     {
//         for (short j = h; j >= i; j--)
//         {
//             cout << " ";
//         }
//         for (short j = 1; j <= h; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================
// #include <iostream>
// using namespace std;
// int main()
// {
//     short h;
//     cout << "Please enter a number (h): ";
//     cin >> h;

//     for (short i = 1; i <= h; i++)
//     {
//         for (short j = h; j >= i; j--)
//         {
//             cout << " ";
//         }
//         for (short j = 1; j <= i; j++)
//         {
//             cout << " *";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Pattern Nested Loop ===========================
// #include <iostream>
// using namespace std;
// int main()
// {
//     short h;
//     cout << "Please enter a number (h): ";
//     cin >> h;

//     short x = 0;
//     for (short i = 1; i <= h; i++)
//     {
//         for (short j = h; j >= i; j--)
//         {
//             cout << " ";
//         }
//         for (short j = 1; j <= (2 * i) - 1; j++)
//         {
//             cout << "*";
//         }
//         x++;
//         cout << endl;
//     }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number, counter = 0;
//     cout << "Please insert a number: ";
//     cin >> number;

//     for (int i = number; i >= 1; i--)
//     {
//         if (number % i == 0)
//         {
//             ++counter;
//         }
//     }
//     if (counter == 2)
//     {
//         cout << "This number is a prime number." << endl;
//     }
//     else
//     {
//         cout << "This number is not a prime number." << endl;
//     }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Please enter a number: ";
//     cin >> number;

//     for (;number != 0;)
//     {
//         cout << number % 10 << endl;
//         number /= 10;
//     }

//     // while (number != 0)
//     // {
//    //   cout << number % 10 << endl;
//         number /= 10;
//     // }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number, max = INT_MIN;
//     cout << "Please insert 10 numbers: " << endl;

//     for (short i = 1; i <= 10; i++)
//     {
//         cin >> number;

//         if (number > max)
//         {
//             max = number;
//         }
//     }

//     cout << "\nMax: " << max << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Please insert infinite positive numbers .. to stop insert negative number: \n";

//     while (cin >> number)
//     {
//         if (number < 0)
//         {
//             break;
//         }
//         if (number != 50)
//         {
//             cout << number << endl;
//         }
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     short num, on_the_right, rev = 0;
//     cout << "Please insert a number: ";
//     cin >> num;

//     short test = num;

//     while (test != 0)
//     {
//         on_the_right = test % 10;
//         test = test / 10;
//         rev = (rev * 10) + on_the_right;
//     }

//     if (num == rev)
//     {
//         cout << "Palindrom!" << endl;
//     }
//     else
//     {
//         cout << "Not Palindrom!" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     short length, width;
//     cout << "Please insert the length & width of the rectangle: " << endl;
//     cin >> length >> width;

//     short larger = (length > width) ? length : width;
//     short smaller = (length > width) ? width : length;

//     for (short i = 1; i <= larger; i++)
//     {
//         for (short j = 1; j <= smaller; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

// for (short i = 1; i <= max(length,width); i++)
// {
//     for (short j = 1; j <= min(length,width); j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {}, sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     cout << "Sum = " << sum << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//         return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] < 0)
//         {
//             arr[i] = 0;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;

// int add(int num)
// {
//     return num;
// }
// int main()
// {
//     int result = 0;

//     int num = 10;

//     while (num != 0)
//     {
//         result += add(num);
//         --num;
//     }

//     cout << result << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Please insert a number: ";
//     cin >> number;

//     // An array to store English word for each digit respectively from 0 to 9
//     string digit_words[10] = {"Zero ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
//     string result = " ";

//     while (number != 0)
//     {
//         int last_digit = number % 10;
//         number /= 10;

//         // we truncate the right digit from the number and use it as an index...
//         // to index its english word in the array and put it in empty string
//         // after that update this string

//         result = digit_words[last_digit] + result;
//     }

//     cout << result << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================================================================

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[5] = {1, -2, 5, -3, -3};

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < 0)
//         {
//             arr[i] = 0;
//         }
//     }

//     for (int num : arr)
//     {
//         cout << num << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <conio.h>

// using namespace std;

// int main()
// {
    // string input;
    // char ch;
    // cout << "Enter a string: ";
    // while (true)
    // {
    //     ch = _getch(); // Read a character without echoing
    //     if (ch == ' ') // Enter key
    //         break;
    //     input.push_back(ch);
    //     cout << '*'; // Print an asterisk to visually mask input
    // }
    // cout << "\nYou entered: " << input << std::endl;

//     string username, password, id;

//     char ch{};
//     cout << "=========================================================\n";
//     cout << "====== Please enter your Username & Password & ID =======\n";

//     cout << "Username: ";
//     while (true)
//     {
//         ch = _getch();
//         if (ch == ' ')
//             break;
//         username.push_back(ch);
//         cout << '*';
//     }
//     cout << endl;

//     cout << "Password: ";
//     while (true)
//     {
//         ch = _getch();
//         if (ch == ' ')
//             break;
//         password.push_back(ch);
//         cout << '*';
//     }
//     cout << endl;

//     cout << "ID: ";
//     while (true)
//     {
//         ch = _getch();
//         if (ch == ' ')
//             break;
//         id.push_back(ch);
//         cout << '*';
//     }
//     cout << "\n=========================================================\n";

//     cout << username << endl;
//     cout << password << endl;
//     cout << id << endl;

//     cout << size(username) << endl;
//     cout << size(password) << endl;
//     cout << size(id) << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
// #include <iostream>
// using namespace std;
// int main()
// {

//     int size = 3;
//     int arr[size][size] = {};
//     int sum = 0;

//     cout << "Input 2D array elements: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cin >> arr[i][j];
//             sum += arr[i][j];
//         }
//     }

//     cout << "\nSum of 2D array elements is " << sum << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
// #include <iostream>
// using namespace std;
// int main()
// {

//     int rows = 3, cols = 3;

//     int arr[rows][cols] = {};

//     cout << "Input 2D array elements: " << endl;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int value;
//     cout << "Please enter a value: ";
//     cin >> value;

//     bool flag = false;
//     int index_rows;
//     int index_cols;

//     for (int i = 0; i < rows; i++)
//     {

//         for (int j = 0; j < cols; j++)
//         {
//             if (value == arr[i][j])
//             {
//                 flag = true;

//                 index_rows = i;
//                 index_cols = j;

//                 break;
//             }
//         }

//         if (flag)
//         {
//             break;
//         }
//     }

//     if (flag)
//     {
//         cout << "This value was found for first time in index rows " << index_rows
//              << " and index cols " << index_cols << endl;
//     }
//     else
//     {
//         cout << "This value was not found in the array." << endl;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
// #include <iostream>
// using namespace std;

// int sum(int x, int y)
// {
//     int z = x + y;
//     return z;
// }

// int main()
// {
//     int x, y;
//     cout << "Please enter two integers numbers: " << endl;
//     cin >> x >> y;

//     cout << x << " + " << y << " = " << sum(x, y) << endl;

//     return 0;
// }
// ======================================================================
// ============================ Question 07 =============================
// =============== Function to reverse int using recursion ==============

// #include <iostream>
// using namespace std;

// int reverseInt(int num, int reversed)
// {
//     if (num == 0)
//     {
//         return reversed;
//     }

//     reversed = (reversed * 10) + (num % 10);

//     return reverseInt(num / 10, reversed);
// }

// int main()
// {
//     int num;
//     cout << "Please enter a number: ";
//     cin >> num;

//     cout << "Reversed number: " << reverseInt(num, 0) << endl;
//     return 0;
// }
// ======================================================================
// ============================ Question 10 =============================
// function to take number & return true if this number can divide by 3 & 4

// #include <iostream>
// using namespace std;

// bool isDivisibleBy3And4(int num)
// {
//     return (num % 3 == 0) && (num % 4 == 0);
// }

// int main()
// {
//     int num;
//     cout << "Please enter a number: ";
//     cin >> num;

//     cout << (isDivisibleBy3And4(num) ? "True\n" : "False\n");

//     return 0;
// }

// ======================================================================
// ============================ Question 11 =============================
// function to take number & return true if this number can divide by 3 & 4

// #include <iostream>
// using namespace std;

// bool isDivisibleBy3And4(int num)
// {
//     return (num % 3 == 0) && (num % 4 == 0);
// }

// int main()
// {
//     int num;
//     cout << "Please enter a number: ";
//     cin >> num;

//     cout << (isDivisibleBy3And4(num) ? "True\n" : "False\n");

//     return 0;
// }

// ======================================================================
// ============================ Question 19 =============================

// #include <iostream>
// using namespace std;

// #define size 5

// void findDifference(int numbers[size])
// {
//     int max = numbers[0], min = numbers[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] > max)
//         {
//             max = numbers[i];
//         }

//         if (numbers[i] < min)
//         {
//             min = numbers[i];
//         }
//     }

//     cout << "\nDifference: " << max - min << endl;
// }

// int main()
// {
//     int numbers[size] = {};

//     cout << "Input an array elements: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> numbers[i];
//     }

//     findDifference(numbers);

//     return 0;
// }
// ======================================================================
// ============================ Question 15 =============================
// a function takes a matrix then return the sum of main diagonal elements

// #include <iostream>
// using namespace std;

// #define size 3

// int sumArrayDiagonal(int matrix[size][size])
// {
//     int sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (i == j)
//             {
//                 sum += matrix[i][j];
//             }
//         }
//     }

//     return sum;
// }

// int main()
// {
//     int matrix[size][size];

//     cout << "Input matrix elements: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nSum of the main diagonal: " << sumArrayDiagonal(matrix) << endl;

//     return 0;
// }
// ===================================================================================
// ================================== Question 01 ====================================
// Given a list of integers, determine whether the sum of its elements is odd or even.

// #include <iostream>
// using namespace std;

// // Function to calculate the sum of elements in the array
// int sumArrElements(int arr[], int size)
// {
//     int sum = 0;

//     for (int i = 0; i < size; i++)
//         sum += arr[i];

//     return sum;
// }

// // Function to check if a number is even or odd
// string checkEvenOrOdd(int arr[], int size)
// {
//     int sum = sumArrElements(arr, size);

//     return (sum % 2 == 0) ? "Even" : "Odd";
// }

// int main()
// {
//     int size;
//     cout << "\nPlease enter the size of the array: ";
//     cin >> size;

//     // Check if the size is within the valid range
//     if (size <= 0 || size > 10)
//     {
//         cout << "\nInvalid input. We expect only a positive integer betwwen 1 to 10." << endl;
//         return 1; // Exit the program
//     }

//     int arr[size];
//     cout << "\nPlease enter " << size << " integers (enter a non-integer to break the loop):\n";

//     int userInput, counter = 0;

//     // Read integers from the user and store them in the array
//     // untill input a non-integer the loop will break
//     while (cin >> userInput && counter < size)
//     {
//         arr[counter] = userInput;
//         counter++;
//     }

//     // If no integers were entered, we set the size = 1
//     // and add a default value to index 0 in the array
//     if (counter == 0)
//     {
//         size = 1;
//         arr[0] = 0;
//     }

//     cout << "\nThe sum is: " << checkEvenOrOdd(arr, size) << endl;

//     return 0;
// }

// ===================================================================================
// ================================== Question 02 ====================================
// ========== Given a set of numbers, return the additive inverse of each. ===========

// #include <iostream>
// using namespace std;

// // A function to get the additive inverse of each element in an array
// void getAdditiveInverse(int inputArray[], int outputArray[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         outputArray[i] = -inputArray[i];
//     }
// }

// int main()
// {
//     const int size = 5;
//     int inputArray[size] = {};

//     cout << "Please enter " << size << " integer numbers: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }

//     // we create an array to store the additive inverses ..
//     // by default passing an array is passing by reference

//     int resultArray[size] = {};

//     getAdditiveInverse(inputArray, resultArray, size);

//     cout << "\n[";
//     for (int i = 0; i < size; i++)
//     {
//         cout << inputArray[i];
//         if (i != (size - 1))
//         {
//             cout << ",";
//         }
//     }
//     cout << "] == ";

//     cout << "[";
//     for (int i = 0; i < size; i++)
//     {
//         cout << resultArray[i];
//         if (i != (size - 1))
//         {
//             cout << ",";
//         }
//     }
//     cout << "]";

//     return 0;
// }
// ===================================================================================
// ================================== Question 03 ====================================
// ===== Given an array of integers, return a new array with each value doubled ======

// #include <iostream>
// using namespace std;

// // A function to double the value of each element in an array
// void doubleArrayElements(int inputArray[], int outputArray[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         outputArray[i] = inputArray[i] * 2;
//     }
// }

// int main()
// {
//     const int size = 3;
//     int inputArray[size] = {};

//     cout << "Please enter " << size << " integer numbers: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }

//     int resultArray[size] = {};

//     doubleArrayElements(inputArray, resultArray, size);

//     cout << "\n[";
//     for (int i = 0; i < size; i++)
//     {
//         cout << inputArray[i];
//         if (i != (size - 1))
//         {
//             cout << ",";
//         }
//     }
//     cout << "] --> ";

//     cout << "[";
//     for (int i = 0; i < size; i++)
//     {
//         cout << resultArray[i];
//         if (i != (size - 1))
//         {
//             cout << ",";
//         }
//     }
//     cout << "]";

//     return 0;
// }

// ======================================================================
// ============================ Question 05 =============================
/* You will be given an array of integers whose elements have both a negative
and a positive value, except for one integer that is either only negative or
only positive. Your task will be to find that integer. */

// #include <iostream>
// using namespace std;

// // Function to find integers without matching negative or positive counterpart.
// void findUniqueInteger(int inputArray[], int size)
// {
//     bool found = false;

//     for (int i = 0; i < size; i++)
//     {
//         found = false;

//         for (int j = 0; j < size; j++)
//         {
//             if (inputArray[i] == -inputArray[j])
//             {
//                 found = true;
//                 break; // no need to continue checking if we find the matching
//             }
//         }

//         if (!found)
//         {
//             if (inputArray[i] < 0)
//             {
//                 cout << inputArray[i] << endl << inputArray[i]
//                      << " has no matching positive appearance.\n" << endl;
//                 break; // to handle the case of the same number repeated more than one time.
//             }
//             else
//             {
//                 cout << inputArray[i] << endl << inputArray[i]
//                      << " has no matching negative appearance.\n" << endl;
//                 break;
//             }
//         }
//     }
// }

// int main()
// {
//     int size = 7;
//     int inputArray[size] = {};

//     cout << "\nPlease enter " << size << " integers numbers: ";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }

//     cout << "\n[";
//     for (int i = 0; i < size; i++)
//     {
//         cout << inputArray[i];

//         if (i != (size - 1))
//             cout << ",";
//     }
//     cout << "] => ";

//     findUniqueInteger(inputArray, size);

//     return 0;
// }

// ======================================================================
// ============================ Question 06 =============================
// Write a CPP program to delete element from array at specified position

// #include <iostream>
// using namespace std;

// void deleteAt(int inputArray[], int pos, int &size)
// {
//     if (pos < 0 || pos > size)
//     {
//         cout << "Invalid position. We expect any postion between 0 to " << size - 1 << endl;
//         return;
//     }

//     for (int i = pos; i < size; i++)
//     {
//         inputArray[i - 1] = inputArray[i];
//     }

//     // Decrease the size of the array
//     size--;

//     cout << "Array after deletion: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << inputArray[i] << " ";
//     }
// }

// int main()
// {
//     int size = 5;
//     int inputArray[size];

//     cout << "Input array elements: ";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }

//     int pos;
//     cout << "Enter the position to delete (0 to " << size - 1 << "): ";
//     cin >> pos;

//     deleteAt(inputArray, pos, size);

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================= swap numbers ==============================
// #include <iostream>
// using namespace std;

// void swap(int &x, int &y)
// {
//     int tem = x;
//     x = y;
//     y = tem;
// }

// int main()
// {

//     int x, y;
//     cout << "PLease enter two numbers: " << endl;
//     cin >> x >> y;

//     cout << x << " " << y << endl;

//     swap(x, y);

//     cout << x << " " << y << endl;

//     return 0;
// }

// ======================================================================
// ============================ Question 02 =============================
// ========= Create the Fibonacci Series using recursion in c++ =========

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int first = 0, second = 1, next;

//     for (int i = 1; i < n; ++i)
//     {
//         next = first + second;
//         first = second;
//         second = next;
//     }

//     cout << "Fibonacci value for " << n << " :" << next << endl;

//     return 0;
// }

// // =================================================================== //

// #include <iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << "Fibonacci value for " << n << fibonacci(n) << endl;

//     return 0;
// }

// ======================================================================
// ============================ Question 02 =============================
// ========== Create sum digits function using recursion in c++ =========

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n % 10 + sum(n / 10);
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << sum(n) << endl;

//     return 0;
// }

// ======================================================================
// ============================ Question 03 =============================
// ========= Create pow of a num function using recursion in c++ ========

// #include <iostream>
// using namespace std;

// int pow(int b, int e)
// {
//     if (e == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return b * pow(b, e - 1);
//     }
// }

// int main()
// {
//     int b, e;
//     cout << "Enter the value of b & e: " << endl;
//     cin >> b >> e;

//     cout << pow(b, e) << endl;

//     return 0;
// }

// ======================================================================
// ============================ Question 04 =============================
// == Write a function takes string then return the most repeated char ==

// #include <iostream>
// #include <string>

// using namespace std;

// char repeatedChar(string str)
// {
//     int length = str.size();

//     string unique_str = "";

//     for (int i = 0; i < length; i++)
//     {
//         if (unique_str.find(str[i]) == string::npos)
//         {
//             unique_str += str[i];
//         }
//     }

//     int count[unique_str.size()] = {};
//     int counter;

//     for (int i = 0; i < unique_str.size(); i++)
//     {
//         counter = 0;
//         for (int j = 0; j < length; j++)
//         {
//             if (unique_str[i] == str[j])
//             {
//                 counter++;
//             }
//         }
//         count[i] = counter;
//     }

//     int max = count[0];
//     int index = 0;

//     for (int i = 1; i < unique_str.size(); i++)
//     {
//         if (count[i] > max)
//         {
//             max = count[i];
//             index = i;
//         }
//     }

//     return unique_str[index];
// }

// int main()
// {
//     string str = "aaabbbbbbbbbcccccccccccccrrrrrrrrrrrrrrrrra";

//     cout << repeatedChar(str) << endl;

//     return 0;
// }

// #include <iostream>

// void printEvenOddTogether(int start, int n)
// {
//     if (start > n)
//     {
//         return; // Base case: stop recursion when start is greater than n
//     }

//     if (start % 2 == 0)
//     {
//         std::cout << "Even: " << start << " ";
//     }
//     else
//     {
//         std::cout << "Odd: " << start << " ";
//     }

//     printEvenOddTogether(start + 1, n); // Recursive call with the next number
// }

// int main()
// {
//     int n;
//     std::cout << "Enter a number (n): ";
//     std::cin >> n;

//     std::cout << "Even and odd numbers between 1 and " << n << ": ";
//     printEvenOddTogether(1, n);

//     return 0;
// }

// ======================================================================
// ============================ Question 05 =============================

// #include <iostream>
// using namespace std;

// int areaSqure(int num)
// {
//     return num * num;
// }

// int areaCircle(int radius)
// {
//     return (3.14 * radius * radius);
// }

// void multipleValuesFunction(int &result1, double &result2)
// {
//     result1 = areaSqure(result1);
//     result2 = areaCircle(result2);
// }

// int main()
// {
//     int result1 = 4;
//     double result2 = 10;

//     multipleValuesFunction(result1, result2);

//     cout << result1 << endl;
//     cout << result2 << endl;

//     return 0;
// }