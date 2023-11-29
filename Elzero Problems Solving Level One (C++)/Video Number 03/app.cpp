// ====================================================================== //
// ============================= Problem 01 ============================= //
// ============================= Even Or Odd ============================ //
// #include <iostream>
// using namespace std;

// string check_num(int number)
// {
//     return (number % 2 == 0) ? "Even" : "Odd";
// }

// int main()
// {

//     int number;
//     cout << "Please enter a number: ";
//     cin >> number;

//     cout << "\nThe number is: " << check_num(number);

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 02 ============================= //
// ========================= Reversed Strings  ========================== //
// #include <iostream>
// using namespace std;

// string reverse_str(string str)
// {
//     short length = str.length();

//     string rev_str = "";

//     for (short i = (length - 1); i >= 0; i--)
//     {
//         rev_str += str[i];
//     }

//     return rev_str;
// }

// int main()
// {
//     string str;
//     cout << "\nPlease enter a string: ";
//     cin >> str;

//     cout << str << " ====> " << reverse_str(str) << endl;

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 03 ============================= //
// ===================== Convert A Boolean To A String =================== //

// #include <iostream>
// #include <string>
// using namespace std;

// string bool_to_string(bool value)
// {
//     return (value == true) ? "True" : "False";
// }

// int main()
// {
//     bool value;
//     cout << "\nPlease enter a boolen value: ";
//     cin >> value;

//     cout << bool_to_string(value) << endl;

//     return 0;
// }