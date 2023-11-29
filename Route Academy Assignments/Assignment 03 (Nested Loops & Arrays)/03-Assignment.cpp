//// ======================================================================= //
//// ============================ Assignment 03 ============================ //

//// ======================================================================= //
//// ============================ Question 01 ============================== //
//// ================= right triangle number pattern series ================ //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Please insert a number: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 02 ============================== //
//// ============= hollow right triangle star pattern series  ============== //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Please insert a number (rows): ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (j == 1 || j == i || i == num)
//             {
//                 cout << "*";
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


//// ======================================================================= //
//// ============================ Question 03 ============================== //
//// ============= inverted right triangle star pattern series ============= //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cout << "Please insert a number (rows): ";
//     cin >> rows;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows; j >= i; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 04 ============================== //
//// ============= find a list of non-prime numbers from 1 to N ============ //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number, counter;
//     cout << "\nPlease insert a number: ";
//     cin >> number;

//     // We start from 4 to handle the case of inputs less than 4 in the else statement
//     if (number >= 4)
//     {
//         cout << "\nThe list of non-prime numbers from 1 to " << number << " :\n" << endl;

//         for (int i = 1; i <= number; ++i)
//         {
//             counter = 0;

//             for (int j = 1; j <= i; ++j)
//             {
//                 if (i % j == 0)
//                 {
//                     ++counter;
//                 }
//             }

//             if (counter != 2)
//             {
//                 cout << i << " ";
//             }
//         }

//         cout << "\n\n";
//     }
//     else
//     {
//         cout << "\nSorry, We expect any number above 3.\n"<< endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 05 ============================== //
//// =============== input any number and print it in words ================ //

// // =============== Solution with using 1D & 2D character array ============= //
// #include <iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     int number;
//     cout << "Please enter a number: ";
//     cin >> number;

//     // Handling the case of input (0)
//     if (number == 0)
//     {
//         cout << "Zero ";
//     }
//     else
//     {
//         // Handling negative numbers: convert to positive & print "Negative" before words
//         if (number < 0)
//         {
//             cout << "Negative: ";
//             number = -number;
//         }

//         // An 2D character array to store English word for each digit respectively from 0 to 9
//         char digit_words[][7] = {"Zero ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};

//         // An empty character array to store the concatenated string
//         char result[58] = "";

//         int last_digit;

//         // we will truncate the right digit from the number and use it as an index
//         // to index its english word in the array and put it in empty character array
//         // after that update this character array continusly till number != 0
//         // we use some functions from the cstring library to print the number in the correct order

//         while (number != 0)
//         {
//             last_digit = number % 10;
//             number /= 10;

//             // A temporary character array to store the concatenated string
//             char temp[58];

//             // Copy the english word for the digit to the temp array
//             strcpy(temp, digit_words[last_digit]);

//             // Concatenate the current temp array with the existing result array
//             strcat(temp, result);

//             // Copy the contents of temp to the result array
//             strcpy(result, temp);
//         }

//         cout << result << endl;
//     }

//     return 0;
// }

// // ===================== Solution with using string ======================= //
// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Please enter a number: ";
//     cin >> number;

//     // Handling the case of input (0)
//     if (number == 0)
//     {
//         cout << "Zero ";
//     }
//     else
//     {
//         // Handling negative numbers: convert to positive & print "Negative" before words
//         if (number < 0)
//         {
//             cout << "Negative: ";
//             number = -number;
//         }

//         // An array to store English word for each digit respectively from 0 to 9

//         string digit_words[] = {"Zero ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};

//         string result = " ";

//         int last_digit;

//         // we will truncate the right digit from the number and use it as an index
//         // to index its english word in the array and put it in empty string
//         // after that update this string continusly till number != 0

//         while (number != 0)
//         {
//             last_digit = number % 10;
//             number /= 10;
//             result = digit_words[last_digit] + result;
//         }

//         cout << result << endl;
//     }
//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 06 ============================== //
//// =============== count even and odd elements in the array ============== //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 9;

//     cout << "Please enter " << size << " numbers: \n";

//     int arr_nums[size] = {};

//     int index = 0;
//     int count_even = 0, count_odd = 0;

//     while (index < size)
//     {
//         cin >> arr_nums[index];

//         (arr_nums[index] % 2 == 0) ? ++count_even : ++count_odd;

//         ++index;
//     }

//     cout << "\nTotal even elements: " << count_even << endl;
//     cout << "Total odd elements: " << count_odd << endl;

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 07 ============================== //
//// ======== search whether an element exists in the array or not ========= //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr_size = 10;
//     int numbers[arr_size] = {};

//     cout << "Please enter " << arr_size << " integers numbers : \n" << endl;

//     for (int i = 0; i < arr_size; i++)
//     {
//         cin >> numbers[i];
//     }

//     int search_number;
//     cout << "\nEnter a number to search whether it exists in the array or not: ";
//     cin >> search_number;

//     int index = -1;

//     for (int i = 0; i < arr_size; i++)
//     {
//         if (search_number == numbers[i])
//         {
//             index = i;
//             break;
//             // The 'break' is used to handle cases where the same number appears multiple times.
//             // We ensures that only the index of the first occurrence of the number is recorded.
//         }
//     }

//     if (index >= 0)
//     {
//         cout << "\nThe number " << search_number << " was found in the array for the first time at index " << index << "\n\n";
//     }
//     else
//     {
//         cout << "\nThe number " << search_number << " wasn't found in the array.\n\n";
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 08 ============================== //
//// ==== count the number of occurrences of a given number in an array ==== //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr_size = 10;
//     int numbers[arr_size] = {};

//     cout << "Please enter " << arr_size << " integers numbers : " << endl;

//     for (int i = 0; i < arr_size; i++)
//     {
//         cin >> numbers[i];
//     }

//     int number;
//     cout << "\nEnter a number to count this number' occurrences in the array: ";
//     cin >> number;

//     int counter = 0;

//     for (int num : numbers)
//     {
//         if (num == number)
//         {
//             ++counter;
//         }
//     }

//     cout << "\nNumber of occurrences of " << number << " is " << counter << "\n\n";

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 09 ============================== //
//// ====== copy all elements of the first array into the second array ===== //

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr_size = 10;
//     int arr1[arr_size] = {};
//     int arr2[arr_size] = {};

//     cout << "Please insert " << arr_size << " integers numbers : " << endl;

//     for (int i = 0; i < arr_size; i++)
//     {
//         cin >> arr1[i];
//         arr2[i] = arr1[i];
//     }

//     cout << "\nArray1: ";
//     for (int num : arr1)
//     {
//         cout << num << " ";
//     }

//     cout << "\nArray2: ";
//     for (int num : arr2)
//     {
//         cout << num << " ";
//     }
//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 10 ============================== //
//// ==== input elements in array then print all unique elements in array == //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr_size = 10;
//     int numbers[arr_size] = {};

//     cout << "Please insert " << arr_size << " integers numbers : " << endl;

//     for (int i = 0; i < arr_size; i++)
//     {
//         cin >> numbers[i];
//     }

//     int counter = {};

//     cout << "\nAll unique elements in the array are: ";

//     for (int i = 0; i < arr_size; i++)
//     {
//         counter = 0;
//         for (int j = 0; j < arr_size; j++)
//         {
//             if (numbers[i] == numbers[j])
//             {
//                 counter++;
//             }
//         }
//         if (counter == 1)
//         {
//             cout << numbers[i] << " ";
//         }
//     }

//     return 0;
// }

// ======================================================================= //
// ============================ Question 11 ============================== //
// === find two numbers whose sum equals the last element in the array === //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr_size = 8;
//     int numbers[arr_size] = {1,7,7,5,6,9,11,12};

//     // cout << "\nPlease insert " << arr_size << " integers numbers : " << endl;

//     // for (int i = 0; i < arr_size; i++)
//     // {
//     //     cin >> numbers[i];
//     // }

//     cout << "\nArray pairs whose sum equal to " << numbers[arr_size - 1] << " :\n";

//     for (int i = 0; i < arr_size - 1; i++)
//     {
//         for (int j = i + 1; j < arr_size - 1; j++)
//         {
//             if (numbers[i] + numbers[j] == numbers[arr_size - 1])
//             {
//                 cout << numbers[i] << " , " << numbers[j] << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

//// ========================== BONUS PROBLEMS ============================= //
//// ============================ Question 12 ============================== //
//// ===== print an equilateral triangle or Pyramid star pattern series ==== //

// #include <iostream>
// using namespace std;
// int main()
// {

//     int rows;
//     cout << "Please insert a number (rows): ";
//     cin >> rows;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows; j >= i; j--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (2 * i) - 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 13 ============================== //
//// ========= print a rhombus star pattern of N rows using a loop ========= //

// #include <iostream>
// using namespace std;
// int main()
// {

//     int rows;
//     cout << "Please insert a number (rows): ";
//     cin >> rows;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows; j >= i; j--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= rows; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 14 ============================== //
//// ================== Print a diamond that has 2N rows =================== //

// #include <iostream>
// using namespace std;
// int main()
// {

//     int rows;
//     cout << "Please insert a number (rows): ";
//     cin >> rows;

//     // ===== First equilateral triangle ===== //
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows; j > i; j--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (2 * i) - 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // ===== second equilateral triangle (reversed) ===== //
//     for (int i = rows; i >= 1; i--)
//     {
//         for (int j = rows; j > i; j--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (2 * i) - 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//// ======================================================================= //
//// ============================ Question 15 ============================== //
//// ============================ U. Some Sums ============================= //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int total_count, lower_limit, upper_limit, sum_valid_numbers = 0;

//     cout << "\nPlease enter the total count and lower & upper limits: " << endl;
//     cin >> total_count >> lower_limit >> upper_limit;

//     cout << "\nThe numbers whose sums of digits within the range of " << lower_limit << " to " << upper_limit << " are:\n";

//     int number, right_digit, digit_sum;

//     for (int current_num = 1; current_num <= total_count; current_num++)
//     {
//         number = current_num;
//         right_digit = 0;
//         digit_sum = 0;

//         // We extract digits and calculate sum
//         while (number != 0)
//         {
//             right_digit = number % 10;
//             digit_sum += right_digit;
//             number /= 10;
//         }

//         // We check if digit sum is within the specified range
//         if (digit_sum >= lower_limit && digit_sum <= upper_limit)
//         {
//             cout << current_num << " ";
//             sum_valid_numbers += current_num;
//         }
//     }

//     cout << "\n\nSum of valid numbers is " << sum_valid_numbers << "\n\n";

//     return 0;
// }