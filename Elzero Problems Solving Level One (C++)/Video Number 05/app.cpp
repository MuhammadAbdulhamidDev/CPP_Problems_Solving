// ====================================================================== //
// ============================= Problem 01 ============================= //
// ======================= Remove Exclamation Marks ===================== //

// #include <iostream>
// #include <string>
// using namespace std;

// string RemoveExclamationMarks(string str)
// {
//     short length = str.length();

//     string pure_str = "";

//     for (short i = 0; i < length; i++)
//     {
//         if (str[i] == '!')
//         {
//             continue;
//         }
//         else
//         {
//             pure_str += str[i];
//         }
//     }

//     return pure_str;
// }

// int main()
// {

//     string str;
//     cout << "Please enter a string with many exclamation marks : " << endl;
//     cin >> str;

//     cout << "The string without exclamation marks: " << RemoveExclamationMarks(str) << endl;

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 02 ============================= //
// ============== Find Maximum and Minimum Values of a List  ============ //

// #include <iostream>
// #include <vector>
// using namespace std;

// short max_num(vector<int> my_vector)
// {

//     short max_num = SHRT_MIN;

//     for (short num : my_vector)
//     {
//         if (num > max_num)
//         {
//             max_num = num;
//         }
//     }

//     return max_num;
// }

// short min_num(vector<int> my_vector)
// {

//     short min_num = SHRT_MAX;

//     for (short num : my_vector)
//     {
//         if (num < min_num)
//         {
//             min_num = num;
//         }
//     }

//     return min_num;
// }

// int main()
// {

//     vector<int> my_vector;
//     short number;

//     cout << "Please enter a list of integers : " << endl;

//     while (cin >> number)
//     {
//         my_vector.push_back(number);
//     }

//     cout << "The maximum number is: " << max_num(my_vector) << endl;
//     cout << "The minimum number is: " << min_num(my_vector) << endl;

//     return 0;
// }
