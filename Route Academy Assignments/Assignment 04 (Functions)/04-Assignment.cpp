//// ===================================================================================
//// ============================ Assignment 04 ========================================

//// ===================================================================================
//// ================================== Question 01 ====================================
//// ============== find the sum of main diagonal elements of the matrix ===============

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int rows = 3;
//     const int cols = 3;

//     int matrix[rows][cols];

//     cout << "Please enter a " << rows << "x" << cols << " matrix: " << endl;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     int sum = 0;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (i == j)
//                 sum += matrix[i][j];
//         }
//     }

//     cout << "\nSum of main diagonal elements = " << sum << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 02 ====================================
//// ========= read elements in two matrixes and add elements of both matrixes =========

// #include <iostream>
// using namespace std;

// #define size 3

// // function to read elements for a matrix
// void readMatrix(int matrix[size][size])
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
// }

// // function to add two matrices and store the result in another matrix
// void addMatrices(int matrix1[size][size], int matrix2[size][size], int result[size][size])
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }
// }

// // function to display a matrix
// void displayMatrix(int matrix[size][size])
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     // Input elements for the first matrix
//     int matrix1[size][size] = {};
//     cout << "\nPlease enter a " << size << "x" << size << " matrix1: " << endl;
//     readMatrix(matrix1);

//     // Input elements for the second matrix
//     int matrix2[size][size] = {};
//     cout << "\nPlease enter a " << size << "x" << size << " matrix2: " << endl;
//     readMatrix(matrix2);

//     // Add the matrices and store the result in the 'result' matrix
//     int result[size][size] = {};
//     addMatrices(matrix1, matrix2, result);

//     // Display the result matrix
//     cout << "\nSum of both matrices = " << endl;
//     displayMatrix(result);

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 03 ====================================
//// ================= find the sum of elements of each row of the matrix ==============

// #include <iostream>
// using namespace std;

// #define rows 3
// #define cols 3

// // function to read elements for a matrix
// void readMatrix(int matrix[rows][cols])
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
// }

// void calcAndDisplayRowSums(int matrix[rows][cols])
// {
//     int sum = 0;

//     for (int i = 0; i < rows; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < cols; j++)
//         {
//             sum += matrix[i][j];
//         }

//         cout << "Sum of row " << i + 1 << " = " << sum << endl;
//     }
// }

// int main()
// {

//     int matrix[rows][cols] = {};
//     cout << "Input elements in a " << rows << "x" << cols << " matrix: " << endl;
//     readMatrix(matrix);

//     calcAndDisplayRowSums(matrix);

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 04 ====================================
//// ==== read elements in a matrix & check if the given matrix is symmetric or not ====

// #include <iostream>
// using namespace std;

// #define rows 3
// #define cols 3

// // function to read elements for a matrix
// void readMatrix(int matrix[rows][cols])
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
// }

// // transform the rows in the input matrix to columns in the new matrix
// void transposeMatrix(int matrix[rows][cols], int matrixT[rows][cols])
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             matrixT[j][i] = matrix[i][j];
//         }
//     }
// }

// bool isSymmetricMatrix(int matrix[rows][cols], int matrixT[rows][cols])
// {
//     bool flag = true;

//     /* check whether the elements in the transpose matrix is equal to the elements
//     in the original matrix in the same indexes .. at first element that break the eauality
//     set the flag to false and break the inner & outer loop. */

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (matrixT[i][j] != matrix[i][j])
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }
// int main()
// {
//     int matrix[rows][cols] = {};
//     cout << "Input elements in a " << rows << "x" << cols << " matrix: " << endl;
//     readMatrix(matrix);

//     // declare a new matrix to store the transpose of the input matrix.
//     int matrixT[rows][cols] = {};
//     transposeMatrix(matrix, matrixT);

//     cout << ((isSymmetricMatrix(matrix, matrixT)) ?
//             "\nGiven matrix is a symmetric matrix.\n" :
//             "\nGiven matrix is not a symmetric matrix.\n");

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 05 ====================================
//// ======= void function, take an integer, print it, call this method in main ========

// #include <iostream>
// using namespace std;

// void printNum(int num)
// {
//     cout << "Your number is: " << num << endl;
// }

// int main()
// {
//     int num;
//     cout << "Please enter a number: ";
//     cin >> num;

//     printNum(num);

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 06 ====================================
//// =========== take three integers then return the average as float value ============

// #include <iostream>
// using namespace std;

// void readArray(int inputArray[], int size)
// {
//     cout << "Please enter " << size << " numbers: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }
// }

// float sumArrayElements(int inputArray[], int size)
// {
//     float sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += inputArray[i];
//     }
//     return sum;
// }

// float calcAverage(int inputArray[], int size)
// {
//     float average = sumArrayElements(inputArray, size) / size;
//     return average;
// }

// int main()
// {
//     const int size = 3;
//     int inputArray[size] = {};

//     readArray(inputArray, size);

//     sumArrayElements(inputArray, size);

//     cout << "The average of " << size << " inserted numbers is: "
//          << calcAverage(inputArray, size) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 07 ====================================
//// input two or more numbers from user & find maximum and minimum of the given numbers

// #include <iostream>
// using namespace std;

// void readArray(int inputArray[], int size)
// {
//     cout << "Please enter " << size << " numbers: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }
// }

// int findMax(int numbers[], int size)
// {
//     int max = numbers[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] > max)
//         {
//             max = numbers[i];
//         }
//     }

//     return max;
// }

// int findMin(int numbers[], int size)
// {
//     int min = numbers[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] < min)
//         {
//             min = numbers[i];
//         }
//     }

//     return min;
// }

// int main()
// {
//     const int size = 10;
//     int numbers[size] = {};

//     readArray(numbers, size);

//     cout << "Maximum number: " << findMax(numbers, size) << endl;
//     cout << "Minimum number: " << findMin(numbers, size) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 08 ====================================
//// ============= check whether given number is even or odd using functions ===========

// #include <iostream>
// using namespace std;

// bool isEven(int num)
// {
//     return (num % 2 == 0);
// }

// int main()
// {
//     int num{};
//     cout << "\nPlease enter a number: ";
//     cin >> num;

//     cout << (isEven(num) ? "\nEven\n" : "\nOdd\n") << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 09 ====================================
//// ============ return true if this number is prime otherwise return false ===========

// #include <iostream>
// using namespace std;

// bool isPrime(int num)
// {
//     if (num <= 1)
//     {
//         return false;
//     }
//     else
//     {
//         int preNum = num - 1;
//         // If the number is divided by any number between 2 to preNum, it's not prime.
//         for (int i = 2; i <= preNum; i++)
//         {
//             if (num % i == 0)
//                 return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int num;
//     cout << "\nPlease enter a number: ";
//     cin >> num;

//     cout << (isPrime(num) ? "True\n" : "False\n");

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 10 ====================================
//// ================ Write a function to find a cube of a given number ================

// #include <iostream>
// using namespace std;

// int calcCubeNum(int num)
// {
//     return (num * num * num);
// }

// int main()
// {
//     int num;
//     cout << "\nPlease enter a number: ";
//     cin >> num;

//     cout << "Cube of " << num << " = " << calcCubeNum(num) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 11 ====================================
// /*
// input radius of circle from user and find diameter
// circumference and area of the given circle using function
// */

// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// float calcDiameter(float radius)
// {
//     return (2 * radius);
// }

// float calcCircumference(float radius)
// {
//     return (2 * M_PI * radius);
// }

// float calcArea(float radius)
// {
//     return (M_PI * radius * radius);
// }

// void displayCircleProperties(float radius)
// {
//     float diameter = calcDiameter(radius);
//     float circumference = calcCircumference(radius);
//     float area = calcArea(radius);

//     cout << fixed << setprecision(2);
//     cout << "Diameter:      " << diameter << " units" << endl;
//     cout << "Circumference: " << circumference << " units" << endl;
//     cout << "Area:          " << area << " sq. units" << endl;
// }

// int main()
// {
//     float radius;
//     cout << "\nPlease enter the radius of the circle: ";
//     cin >> radius;

//     displayCircleProperties(radius);

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 12 ====================================
//// ================= Take a number and print all divisors of number ==================

// #include <iostream>
// using namespace std;

// void printDivisors(int num)
// {
//     cout << "\nDivisors of " << num << " : ";
//     for (int divisor = 1; divisor <= num; divisor++)
//     {
//         if (num % divisor == 0)
//         {
//             cout << divisor << " ";
//         }
//     }
// }

// int main()
// {
//     int num;
//     cout << "\nPlease enter a number: ";
//     cin >> num;

//     printDivisors(num);

//     return 0;
// }
//// ===================================================================================
//// ================================== Question 13 ====================================
//// ======= Write a program to print all elements of an array using the function ======

// #include <iostream>
// using namespace std;

// void readArray(int inputArray[], int size)
// {
//     cout << "\nInput elements: ";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }
// }

// void printArray(int inputArray[], int size)
// {
//     cout << "Array elements: ";

//     for (int i = 0; i < size; i++)
//     {
//         cout << inputArray[i] << " ";
//     }
// }

// int main()
// {
//     const int size = 10;
//     int inputArray[size];

//     readArray(inputArray, size);
//     printArray(inputArray, size);

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 14 ====================================
//// ======= Write a program to find the sum of array elements using the function ======

// #include <iostream>
// using namespace std;

// void readArray(int inputArray[], int size)
// {
//     cout << "\nInput array elements : ";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> inputArray[i];
//     }
// }

// int sumArrayElements(int inputArray[], int size)
// {
//     int sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         sum += inputArray[i];
//     }

//     return sum;
// }

// int main()
// {
//     const int size = 10;
//     int inputArray[size] = {};

//     readArray(inputArray, size);

//     cout << "Sum of array elements: " << sumArrayElements(inputArray, size) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 15 ====================================
//// = Write a function takes a matrix then return the sum of main diagonal of elements=

// #include <iostream>
// using namespace std;

// #define rows 3
// #define cols 3

// // function to read elements for a matrix
// void readMatrix(int matrix[rows][cols])
// {
//     cout << "Please enter a " << rows << "x" << cols << " matrix: " << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
// }

// int sumMainDiagonal(int matrix[rows][cols])
// {
//     int sum = 0;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (i == j)
//                 sum += matrix[i][j];
//         }
//     }

//     return sum;
// }

// int main()
// {
//     int matrix[rows][cols];

//     readMatrix(matrix);

//     cout << "\nSum of main diagonal elements = " << sumMainDiagonal(matrix) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 16 ====================================
//// ======== Write a function takes string then return the most repeated char =========

// #include <iostream>
// #include <string>

// using namespace std;

// char findMostRepeatedChar(string inputString)
// {
//     int length = inputString.size();

//     int maxCount = 0;
//     char mostRepeatedChar{}; // Initialize to null character

//     for (int i = 0; i < length; i++)
//     {
//         // Convert the character to lowercase
//         char currentChar = tolower(inputString[i]);

//         int currentCount = 0;

//         for (int j = 0; j < length; j++)
//         {
//             if (currentChar == tolower(inputString[j]))
//             {
//                 currentCount++;
//             }
//         }

//         if (currentCount > maxCount || (currentCount == maxCount && currentChar > mostRepeatedChar))
//         {
//             maxCount = currentCount;
//             mostRepeatedChar = currentChar;
//         }
//     }

//     return mostRepeatedChar;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     getline(cin, userString);

//     char mostRepeated = findMostRepeatedChar(userString);

//     if (mostRepeated != 0)
//     {
//         cout << "\nThe most repeated character is: " << mostRepeated << "\n\n";
//     }
//     else
//     {
//         cout << "\nNo character found.\n\n";
//     }

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 17 ====================================
//// =========== Write a function receive string and convert it to lowercase ===========

// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// string toLowerString(string inputString)
// {
//     int length = inputString.length();

//     for (int i = 0; i < length; i++)
//     {
//         if (isupper(inputString[i]))
//         {
//             inputString[i] = tolower(inputString[i]);
//         }
//     }

//     return inputString;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     cin >> userString;

//     cout << "\n" << userString << " ----> " << toLowerString(userString) << "\n\n";

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 18 ====================================
//// ============== Write a function to check all chars are digits or not ==============

// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// bool areAllDigits(string inputString)
// {
//     for (char digit : inputString)
//     {
//         if (!isdigit(digit))
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     cin >> userString;

//     cout << ((areAllDigits(userString)) ? "True" : "False") << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 19 ====================================
//// ====================  Function to return the max digit in int =====================

// #include <iostream>
// using namespace std;

// int findMaxDigit(int num)
// {
//     int digit{}, maxDigit{};

//     num = abs(num);

//     while (num != 0)
//     {
//         digit = num % 10;

//         if (digit > maxDigit)
//         {
//             maxDigit = digit;
//         }

//         num /= 10;
//     }

//     return maxDigit;
// }

// int main()
// {
//     int num;
//     cout << "\nPlease enter an integer number: ";
//     cin >> num;

//     cout << "Max Digit: " << findMaxDigit(num) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 20 ====================================
//// ==== Write a CPP program to convert string from lowercase to uppercase string =====

// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// string toUpperString(string inputString)
// {
//     int length = inputString.length();

//     for (int i = 0; i < length; i++)
//     {
//         if (islower(inputString[i]))
//         {
//             inputString[i] = toupper(inputString[i]);
//         }
//     }

//     return inputString;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     getline(cin, userString);

//     cout << "\n" << userString << " ----> " << toUpperString(userString) << "\n\n";

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 21 ====================================
//// Write a CPP program to find the total number of vowels and consonants in a string =

// #include <iostream>
// #include <cctype>

// using namespace std;

// bool isVowel(char c)
// {
//     switch (c)
//     {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//     case 'A':
//     case 'E':
//     case 'I':
//     case 'O':
//     case 'U':
//         return true;
//     default:
//         return false;
//     }
// }

// void countVowsAndCons(string inputString)
// {
//     int length = inputString.size();
//     int countVows = 0;
//     int countCons = 0;

//     for (int i = 0; i < length; i++)
//     {
//         if (isalpha(inputString[i]))
//         {
//             isVowel(inputString[i]) ? countVows++ : countCons++;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     cout << endl;
//     cout << "Total Vowels     = " << countVows << endl;
//     cout << "Total Consonants = " << countCons << endl;
// }

// int main()
// {

//     string userString;
//     cout << "\nPlease enter a string: ";
//     getline(cin, userString);

//     countVowsAndCons(userString);

//     return 0;
// }
//// ===================================================================================
//// ================================== Question 22 ====================================
//// ======== Write a CPP program to count the total number of words in a string =======

// #include <iostream>
// #include <cctype>

// using namespace std;

// int countTotalWords(string inputString)
// {
//     int length = inputString.size();
//     int countWords = 0;

//     for (int i = 0; i < length; i++)
//     {
//         if (isspace(inputString[i]))
//         {
//             countWords++;
//         }

//         // handling the case of finish the string without or with any symbol
//         if ((i == length - 1) && (!isalpha(inputString[i]) || isalpha(inputString[i])))
//         {
//             countWords++;
//         }
//     }

//     return countWords;
// }
// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     getline(cin, userString);

//     cout << "\nTotal number of words: " << countTotalWords(userString) << endl;

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 23 ====================================
//// ========= Write a C program to find reverse of a given string using loop ==========

// #include <iostream>
// #include <cctype>

// using namespace std;

// string reverseString(string inputString)
// {
//     int length = inputString.length();

//     string reversedString = "";

//     for (int i = 0; i < length; i++)
//     {
//         reversedString = inputString[i] + reversedString;
//     }

//     return reversedString;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     getline(cin, userString);

//     cout << reverseString(userString) << endl;

//     return 0;
// }

//// =================== Assignment 4 bonus questions =====================
//// ======================================================================
//// ======================================================================
//// ============================ Question 01 =============================
//// a CPP program to get the difference between the largest and smallest
//// values in an array of integers.

// #include <iostream>
// using namespace std;

// void readArray(int arr[], int size)
// {
//     cout << "\nPlease input " << size << " integer elements for the array:\n" << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// }

// int findMax(int numbers[], int size)
// {
//     int max = numbers[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] > max)
//         {
//             max = numbers[i];
//         }
//     }

//     return max;
// }

// int findMin(int numbers[], int size)
// {
//     int min = numbers[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] < min)
//         {
//             min = numbers[i];
//         }
//     }

//     return min;
// }

// int getDifference(int numbers[], int size)
// {
//     int result = findMax(numbers, size) - findMin(numbers, size);

//     return result;
// }

// int main()
// {
//     const int size = 10;
//     int numbers[size] = {};

//     readArray(numbers, size);

//     cout << "\nThe difference is: " << getDifference(numbers, size) << endl;

//     return 0;
// }

//// ======================================================================
//// ============================ Question 02 =============================
//// Write a C++ program to change every letter in a given string with the
//// letter following it in the alphabet

// #include <iostream>
// #include <cctype>

// using namespace std;

// string shiftAlphabet(string inputString)
// {
//     int length = inputString.size();

//     for (int i = 0; i < length; i++)
//     {
//         if (!isalpha(inputString[i]))
//         {
//             continue;
//         }
//         else
//         {
//             switch (inputString[i])
//             {
//             case 'z':
//                 inputString[i] = 'a';
//                 break;
//             case 'Z':
//                 inputString[i] = 'A';
//                 break;
//             default:
//                 inputString[i] += 1;
//                 break;
//             }
//         }
//     }

//     return inputString;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     cin >> userString;

//     cout << "Original string: " << userString << endl;
//     cout << "Shifted  string: " << shiftAlphabet(userString) << endl;

//     return 0;
// }

//// ======================================================================
//// ============================ Question 03 =============================
//// Write a C++ program to capitalize the first letter of each word in
//// a given string. Words must be separated by only one space

// #include <iostream>
// #include <cctype>

// using namespace std;

// string capitalizeFirstLetter(string inputString)
// {
//     int size = inputString.size();

//     inputString[0] = toupper(inputString[0]);

//     for (int i = 0; i < size; i++)
//     {
//         if (isspace(inputString[i]))
//         {
//             inputString[i + 1] = toupper(inputString[i + 1]);
//         }
//     }

//     return inputString;
// }

// int main()
// {
//     string userString;
//     cout << "\nPlease enter a string: ";
//     getline(cin, userString);

//     cout << "Original string   : " << userString << endl;
//     cout << "Capitalized string: " << capitalizeFirstLetter(userString) << endl;

//     return 0;
// }

//// ======================================================================
//// ============================ Question 04 =============================
//// Complete the function/method so that it returns the url with anything
//// after the anchor(#) removed

// #include <iostream>
// #include <cctype>

// using namespace std;

// string modifyURL(string inputString)
// {
//     int pos = inputString.find('#');

//     if (pos != string::npos)
//     {
//         inputString.erase(pos);
//     }

//     return inputString;
// }

// int main()
// {
//     string url;
//     cout << "\nPlease enter the URL: ";
//     cin >> url;

//     cout << "Original URL: " << url << endl;

//     cout << "Modified URL: " << modifyURL(url) << endl;

//     return 0;
// }