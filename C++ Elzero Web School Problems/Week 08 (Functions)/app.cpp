
// =======================================================================
// ============================== Task 01 ================================
// =======================================================================

// #include <iostream>
// using namespace std;

// int calcspecial(int x, int y)
// {
//     if (x == y)
//         return x + y;
//     else if (x > y)
//         return x - y;
//     else if (x < y)
//         return y - x;
// }

// int main()
// {
//     cout << calcspecial(40, 40) << "\n";   // First = Second -> 40 + 40 = 80
//     cout << calcspecial(200, 50) << "\n";  // First > Second -> 200 - 50 = 150
//     cout << calcspecial(100, 300) << "\n"; // First < Second -> 300 - 100 = 200
//     return 0;
// }
// =======================================================================
// ============================== Task 02 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// float money(float salary, int days)
// {
//     int weeks = days / 7;
//     int total = weeks * 2;

//     float perDay = salary / (days - total);

//     return perDay;
// }
// int main()
// {
//     cout << money(2015, 21) << "\n"; // 134.333
//     cout << money(4500, 40) << "\n"; // 150
//     return 0;
// }
// =======================================================================
// ============================== Task 03 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int plusnums(int numone, int numtwo);
// int minusnums(int numone, int numtwo);
// int divnums(int numone, int numtwo);

// int main()
// {
//     cout << plusnums(50, 60) << "\n";   // 110
//     cout << minusnums(150, 50) << "\n"; // 100
//     cout << divnums(100, 5) << "\n";    // 20
//     return 0;
// }

// int plusnums(int numone, int numtwo)
// {
//     return numone + numtwo;
// }

// int minusnums(int numone, int numtwo)
// {
//     return numone - numtwo;
// }

// int divnums(int numone, int numtwo)
// {
//     return numone / numtwo;
// }
// =======================================================================
// ============================== Task 04 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int calculation(int x, int y, int z)
// {
//     return x + y + z;
// }
// int calculation(int x, int y)
// {
//     return (x + y) * 2;
// }
// int calculation(int x)
// {
//     return x * 3;
// }
// int main()
// {
//     cout << calculation(50, 100, 150) << "\n"; // 300
//     cout << calculation(100, 50) << "\n";      // 300
//     cout << calculation(100) << "\n";          // 300
//     return 0;
// }
// =======================================================================
// ============================== Task 05 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int thepower(int x, int y)
// {
//     int pow = 1;
//     while (y != 0)
//     {
//         pow *= x;
//         --y;
//     }

//     return pow;
// }

// int main()
// {
//     cout << thepower(2, 5) << endl; // 32
//     return 0;
// }
// =======================================================================
// ============================== Task 06 ================================
// =======================================================================
// #include <iostream>
// #include <cctype>

// using namespace std;

// string swapping(string str)
// {
//     int size = str.size();

//     for (int i = 0; i < size; i++)
//     {
//         if (str[i] == 'h' || str[i] == 'H')
//         {
//             continue;
//         }
//         else if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]);
//         }
//         else
//         {
//             str[i] = tolower(str[i]);
//         }
//     }

//     return str;
// }

// int main()
// {
//     cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
//     return 0;
// }
// =======================================================================
// ============================== Task 07 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int beforeresult(int num, int counter)
// {
//     int sum = 0;
//     while (counter != -1)
//     {
//         sum += num;
//         --num;
//         --counter;
//     }

//     return sum;
// }

// int main()
// {
//     cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
//     cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54

//     return 0;
// }

// =======================================================================
// ============================== Task 08 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int plusandmultiply(int arr[], int size)
// {
//     int sumEven = 0;
//     int sumOdd = 1;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             sumEven += arr[i];
//         }
//         else
//         {
//             sumOdd *= arr[i];
//         }
//     }

//     arr[0] = sumEven;
//     arr[1] = sumOdd;

//     return arr[0] + arr[1];
// }

// int main()
// {
//     int numbers[] = {10, 20, 3, 30, 5, 7, 40};
//     int numssize = size(numbers);
//     cout << plusandmultiply(numbers, numssize) << "\n";
//     return 0;
// }
// =======================================================================
// ============================== Task 09 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int sumall(int arr[], int size, int num)
// {
//     int sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != num)
//         {
//             sum += arr[i];
//         }
//     }

//     return sum;
// }

// int main()
// {
//     int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
//     int numssize = size(numbers);
//     int noneed = 13;
//     cout << sumall(numbers, numssize, noneed) << "\n";
//     return 0;
// }
// =======================================================================
// ============================== Task 10 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int minpositive(int arr[], int size)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < min && arr[i] > 0)
//         {
//             min = arr[i];
//         }
//     }

//     return min;
// }

// int main()
// {
//     int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
//     int numssize = size(numbers);
//     cout << minpositive(numbers, numssize) << "\n";
//     return 0;
// }
// =======================================================================
// ============================== Task 11 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int firstnegative(int arr[], int size)
// {
//     int max = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] >= 0)
//             continue;
//         else
//         {
//             if (arr[i] > max)
//                 max = arr[i];
//         }
//     }

//     return max;
// }

// int main()
// {
//     int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
//     int numssize = size(numbers);
//     cout << firstnegative(numbers, numssize) << "\n";
//     return 0;
// }
// =======================================================================
// ============================== Task 12 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// string createurl(string str1, string str2, string str3, bool flag = true)
// {
//     string result;

//     if (flag)
//     {
//         result = str1 + "://www." + str2 + "." + str3;
//         return result;
//     }
//     else
//     {
//         result = str1 + "://" + str2 + "." + str3;
//         return result;
//     }
// }

// int main()
// {
//     cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
//     cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
//     cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
//     return 0;
// }
// =======================================================================
// ============================== Task 13 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// string greeting(string name, string gender = " ")
// {
//     if (gender == "Male")
//     {
//         return "Hello Mr " + name;
//     }
//     else if (gender == "Female")
//     {
//         return "Hello Miss " + name;
//     }
//     else
//     {
//         return "Hello " + name;
//     }
// }

// int main()
// {
//     cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
//     cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
//     cout << greeting("Sameh") << "\n";          // Hello Sameh
//     return 0;
// }
// =======================================================================
// ============================== Task 14 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int calculate(int x, int y, string op = "unknown")
// {
//     if (op == "unknown" || op == "a" || op == "add" || op == "+")
//     {
//         return x + y;
//     }
//     else if (op == "s" || op == "subtract" || op == "-")
//     {
//         return x - y;
//     }
//     else if (op == "m" || op == "multiply" || op == "*")
//     {
//         return x * y;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     cout << calculate(10, 20) << "\n";             // 30
//     cout << calculate(10, 20, "a") << "\n";        // 30
//     cout << calculate(10, 20, "s") << "\n";        // -10
//     cout << calculate(10, 20, "subtract") << "\n"; // -10
//     cout << calculate(10, 20, "multiply") << "\n"; // 200
//     cout << calculate(10, 20, "m") << "\n";        // 200
//     cout << calculate(10, 20, "Invalid") << "\n";  // 0
//     return 0;
// }

// =======================================================================
// ============================== Task 15 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// float avg(int arr[], int size)
// {
//     float sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }

//     return sum / size;
// }

// int main()
// {
//     int money[] = {10, 20, 15, 25, 30, 35};
//     int monsize = size(money);
//     cout << avg(money, monsize) << "\n"; // 22.5
//     return 0;
// }

// =======================================================================
// ============================== Task 16 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// int books(int x, int y, int z, int shelf)
// {
//     int a1 = x * 2;
//     int a2 = y * 4;
//     int a3 = z * 6;
//     int a4 = shelf * 20;

//     int sumAreas = a1 + a2 + a3;

//     if (sumAreas > a4)
//     {
//         return 0;
//     }
//     else
//     {
//         return a4 - sumAreas;
//     }
// }

// int main()
// {
//     cout << books(10, 4, 3, 4) << "\n"; // 26
//     cout << books(10, 4, 3, 2) << "\n"; // 0
//     return 0;
// }
// =======================================================================
// ============================== Task 17 ================================
// =======================================================================
// #include <iostream>
// using namespace std;

// float pricing(int phones, int usedPhones, int newPrice, float tax)
// {
//     int newPhones = phones - usedPhones;

//     int newPhonesPrice = newPhones * newPrice;

//     int usedPhonesPrice = usedPhones * (newPrice - 200);

//     int totalPrice = newPhonesPrice + usedPhonesPrice;

//     float pureCompanyGain = totalPrice - (totalPrice * (tax / 100));

//     return pureCompanyGain;
// }

// int main()
// {
//     cout << pricing(50, 10, 800, 20) << "\n"; // 30400
//     return 0;
// }