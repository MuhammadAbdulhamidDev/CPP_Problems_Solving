// ====================================================================== //
// ============================= Problem 01 ============================= //
// ========================== Price Of Mangoes ========================== //
// #include <iostream>
// using namespace std;

// string mango(short quantity, short price)
// {
//     short free, not_free;
//     free = quantity / 3;
//     not_free = quantity - free;

//     if (free == 0)
//     {
//         return to_string(not_free) + " mangoes for " + to_string(price) + "$ per unit = " +
//                to_string(price * not_free) + "$;" + " no mango for free";
//     }
//     else
//     {
//         return to_string(not_free) + " mangoes for " + to_string(price) + "$ per unit = " +
//                to_string(price * not_free) + "$; + " + to_string(free) + " no mango for free";
//     }
// }
// int main()
// {
//     cout << mango(2, 3) << endl;
//     cout << mango(3, 3) << endl;
//     cout << mango(5, 3) << endl;
//     cout << mango(9, 5) << endl;

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 02 ============================= //
// ========================= Quarter Of The Year  ========================== //
// #include <iostream>
// using namespace std;

// string quarter_of_year (short number)
// {
//         switch (number)
//         {
//             case 1:
//                 return "month " + to_string(number) + " (January), is part of the first quarter.";
//                 break;
//             case 2:
//                 return "month " + to_string(number) + " (February), is part of the first quarter.";
//                 break;
//             case 3:
//                 return "month " + to_string(number) + " (March), is part of the first quarter.";
//                 break;
//             case 4:
//                 return "month " + to_string(number) + " (April), is part of the second quarter.";
//                 break;
//             case 5:
//                 return "month " + to_string(number) + " (May), is part of the second quarter.";
//                 break;
//             case 6:
//                 return "month " + to_string(number) + " (June), is part of the second quarter.";
//                 break;
//             case 7:
//                 return "month " + to_string(number) + " (July), is part of the third quarter.";
//                 break;
//             case 8:
//                 return "month " + to_string(number) + " (August), is part of the third quarter.";
//                 break;
//             case 9:
//                 return "month " + to_string(number) + " (September), is part of the third quarter.";
//                 break;
//             case 10:
//                 return "month " + to_string(number) + " (October), is part of the fourth quarter.";
//                 break;
//             case 11:
//                 return "month " + to_string(number) + " (November), is part of the fourth quarter.";
//                 break;
//             case 12:
//                 return "month " + to_string(number) + " (December), is part of the fourth quarter.";
//                 break;
//             default:
//                 return "Please enter a number in the given range (1 : 12).";
//         }
// }
// int main()
// {

//     short number;
//     cout << "Please enter the number of the month: ";
//     cin >> number;

//     cout << quarter_of_year(number) << endl;

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 03 ============================= //
// ======================= Invert Values Of An Array ==================== //

// #include <iostream>
// #include <string>
// #include <array>
// #include <vector>
// using namespace std;

// vector<int> invert(vector<int> myArray)
// {
//     vector<int> rev_myArray;

//     for (short i = 0; i < myArray.size(); i++)
//     {
//         if (myArray[i] < 0)
//         {
//             myArray[i] = -myArray[i];
//             rev_myArray.push_back(myArray[i]);
//         }
//         else
//         {
//             myArray[i] = -myArray[i];
//             rev_myArray.push_back(myArray[i]);
//         }
//     }
//     return rev_myArray;
// }

// int main()
// {

//     vector<int> myArray;
//     int num;

//     cout << "Please enter a set of numbers: ";

//     while (true)
//     {
//         cin >> num;
//         if (num > 5)
//         {
//             break;
//         }
//         myArray.push_back(num);
//     }

//     for (int element : invert(myArray))
//     {
//         cout << element << " ";
//     }

//     return 0;
// }