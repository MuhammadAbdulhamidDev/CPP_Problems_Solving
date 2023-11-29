//// ===================================================================================
//// ============================== ITI-Exam 01 ========================================

//// ===================================================================================
//// ================================== Question 01 ====================================
//// What are the differences between If Condition and Switch, with example?
//// mention three differences.

/* - If Condition and Switch control the flow of the program by acheving a spcific codtions
 *  The differences between them are:
 1- (switch) can work on or use integer value only .. (if) can work on or use any value not integer only
 2- (switch) use in case of equality (equality operator only) .. (
    if) use in case of any operation (any comparison or relational operators)
 3- (switch) test a single expression. It checks the expression equalit to various cases and executes code based on the matching case.
    (if) test a single condition or more by using logical operators.
4 - (switch) use default key word to print after it a suitable message if the expression doesn't match any case
    (if) use else keyword ...
    that if we need use default or else they aren't mandatory.
 */

// if :
// int day = 1;
// if (day == 1)
// {
//     cout << "Monday" << endl;
// }
// else if (day == 2)
// {
//     cout << "Tuesday" << endl;
// }
// else if (day == 3)
// {
//     cout << "Wednesday" << endl;
// }
// else if (day == 4)
// {
//     cout << "Thursday" << endl;
// }
// else if (day == 5)
// {
//     cout << "Friday" << endl;
// }
// else if (day == 6)
// {
//     cout << "Saturday" << endl;
// }
// else if (day == 7)
// {
//     cout << "Sunday" << endl;
// }
// else
// {
//     cout << "Invalid day" << endl;
// }

// switch:
// int day = 4;

// switch (day)
// {
// case 1:
//     cout << "Monday" << endl;
//     break;
// case 2:
//     cout << "Tuesday" << endl;
//     break;
// case 3:
//     cout << "Wednesday" << endl;
//     break;
// case 4:
//     cout << "Thursday" << endl;
//     break;
// case 5:
//     cout << "Friday" << endl;
//     break;
// case 6:
//     cout << "Saturday" << endl;
//     break;
// case 7:
//     cout << "Sunday" << endl;
//     break;
// default:
//     cout << "Invalid day" << endl;
//     break;
// }

//// ===================================================================================
//// ================================== Question 02 ====================================
//// What is the difference between do-while and for, with example?
/*
1- (do-while loop) it's post-test loop, it executes the code block at least once
 and then checks the loop condition after the code block executed
 if true the loop continue work untill the condtion will be false.

do {
    // Code
} while (condition);
 int counter = 1;

do {
    cout << "Counter is: " << counter << endl;
    counter++;
} while (counter <= 5);

 2- (for Loop) it's pre-test loop, it checks the loop condition before executing the code block.
 it continue work untill the condition true if the codition false it terminate.

 for (initialization; condition; iteration) {
    // Code
}

for (int i = 1; i <= 5; i++) {
    cout << "Count is: " << i << endl;
}
*/

//// ===================================================================================
//// ================================== Question 03 ====================================
//// What are primitive data types in C++?.

// Integer Types: int - short - long - long long
// Floating-Point Types: float - double - long double
// Character Types: char
// Boolean Type: bool
// Void Type: void

//// ===================================================================================
//// ================================== Question 04 ====================================
//// Write a function take an integer array and return average, then call it in main function.

// #include <iostream>
// #include <iomanip>
// using namespace std;

// void readArray(int numbers[], int arr_size)
// {
//     cout << "\nPlease enter " << arr_size << " integer numbers: ";
//     for (int i = 0; i < arr_size; i++)
//     {
//         cin >> numbers[i];
//     }
// }
// int sumArrayElements(int numbers[], int arr_size)
// {
//     int sum = 0;
//     for (int i = 0; i < arr_size; i++)
//     {
//         sum += numbers[i];
//     }
//     return sum;
// }
// double calculateAverage(int numbers[], int arr_size)
// {
//     double sum = sumArrayElements(numbers, arr_size);

//     return sum / arr_size;
// }
// void printResult(double average)
// {
//     cout << fixed << setprecision(2) << endl;
//     cout << "\nThe average of the sum of array elements is: " << average << endl;
// }
// int main()
// {
//     const int arr_size = 3;
//     int numbers[arr_size] = {};

//     readArray(numbers, arr_size);

//     double average = calculateAverage(numbers, arr_size);

//     printResult(average);

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 05 ====================================
//// Create a function take two integers to swap them, then call it in main function.

#include <iostream>
using namespace std;

void getInputs(int &firstNum, int &secondNum)
{
    cout << "\nPlease enter two integers numbers: ";
    cin >> firstNum >> secondNum;
}
void printNumbersBeforeSwap(int &firstNum, int &secondNum)
{
    cout << "=======================\n";
    cout << "Before swapping process:\n";
    cout << "First Number = " << firstNum << endl;
    cout << "Second Number = " << secondNum << endl;
    cout << "=======================\n";
}

void swapNums(int &firstNum, int &secondNum)
{
    int temNum{};

    temNum = secondNum;
    secondNum = firstNum;
    firstNum = temNum;
}
void printNumbersAfterSwap(int &firstNum, int &secondNum)
{
    cout << "=======================\n";
    cout << "After swapping process:\n";
    cout << "First Number = " << firstNum << endl;
    cout << "Second Number = " << secondNum << endl;
    cout << "=======================\n";
}

int main()
{
    int firstNum{}, secondNum{};

    getInputs(firstNum, secondNum);
    printNumbersBeforeSwap(firstNum, secondNum);

    swapNums(firstNum, secondNum);
    printNumbersAfterSwap(firstNum, secondNum);

    return 0;
}

//// ===================================================================================
//// ================================== Question 06 ====================================
/* Without coping the following code on compiler, Fix the issues in code to make it print
   the following output, then write the fixed code.*/

/*
1- int j = 1; in main scope we don't need it because
   we declare and initialize int j = 1; in the inner loop scope
    if we want to use it .. we should delete the int from int j = 1;
    in the inner loop scope and remain j = 1; but this is not best practice.
2- i <= 5 / j <= 5 .. to loop 5 times.
3- j++ not j-- to avoid infinte loop and print the demand output correctly
4- if the condtion true we should print the i and j in the same statement
    not in a seperated statements to avoid print i 5 times and j 1 time when the condtion is true
5- print new line after each inner loop done.
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i == j)
//             {
//                 cout << i << " " << j;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//// ===================================================================================
//// ================================== Question 07 ====================================
//// Without coping the following code on compiler, Draw the below code

// *
// **
// * *
// *  *
// *****