//// =============================================================================
//// =============================================================================
//// =============================== A. 1 to N C++ ===============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "Please enter a number: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++) {
//         cout << i << endl;
//     }

//         return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================== B. Even Numbers =============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "Please enter a number: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ====================== C. Even, Odd, Positive and Negative ==================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N, X, even = 0, odd = 0, positive = 0, negative = 0;
//     cout << "Please enter a number: ";
//     cin >> N;

//     for (int i = 0; i < N; i++)
//     {
//         cin >> X;
//         (X % 2 == 0) ? ++even : ++odd;
//         (X > 0) ? ++positive : (X < 0) ? ++negative : 0;
//     }

//     cout << "Even: " << even << endl;
//     cout << "odd: " << odd << endl;
//     cout << "positive: " << positive << endl;
//     cout << "negative: " << negative << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================== D. Fixed Password ============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int password;
//     cout << "Please enter your password: " << endl;

//     int flag;
//     while (cin >> password)
//     {
//         if (password == 1999)
//         {
//             cout << "Correct!" << endl;
//             flag = 1;
//         }
//         else
//         {
//             cout << "Wrong .. Try again" << endl;
//         }
//         if (flag == 1)
//         {
//             break;
//         }
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =================================== E. Max ==================================

// #include <iostream>
// using namespace std;

// int main()
// {
//         int N, X, max = INT_MIN;
//         cout << "Please enter a number: ";
//         cin >> N;

//         for (int i = 0; i < N; i++)
//         {
//             cin >> X;
//             if(X > max) {
//                 max = X;
//             }
//         }

//         cout << "\nmaximum number: " << max << endl;
//         return 0;
// }

//// =============================================================================
//// =============================================================================
//// =========================== F. Multiplication table =========================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "Please enter a number: ";
//     cin >> N;

//     for (int i = 1; i <= 12; i++)
//     {
//         cout << i << " * " << N << " = " << i * N << endl;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ==============================  G. Factorial ================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int N, fact = 1;
//     cout << "PLease enter a number: ";
//     cin >> N;

//     for (int i = N; i >= 1; i--) {

//         fact *= i;
//     }

//     cout << "The factorial of " << N << " is: " << fact;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================== H. One Prim =================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number, counter = 0;
//     cout << "Please enter a number: ";
//     cin >> number;

//     for (int i = number; i >= 1; i--)
//     {
//         if (number % i == 0)
//         {
//             counter++;
//         }
//     }
//     if (counter == 2)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ================================= I. Palindrome =============================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int number, test, rev_number = 0;
//     cout << "Please enter a number: ";
//     cin >> number;

//     test = number;
//     while (test != 0)
//     {
//         rev_number = (rev_number * 10) + (test % 10);
//         test /= 10;
//     }

//     if (rev_number == number)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =========================== J. Primes from 1 to n ===========================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "PLease enter a number: ";
//     cin >> N;

//     int counter;

//     for (int i = 2; i <= N; i++)
//     {
//         counter = 0;

//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 counter++;
//             }
//         }

//         if (counter == 2)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================ K. Divisors ================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "PLease enter a number: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++)
//     {
//         if (N % i == 0)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ==================================== L. GCD =================================
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int A, B;
//     cout << "PLease enter a two number: ";
//     cin >> A >> B;

//     int min_num = min(A, B);
//     int max_num = max(A, B);

//     int gcd;
//     for (int i = 1; i <= min_num; i++)
//     {
//         if (max_num % i == 0 && min_num % i == 0)
//         {
//             gcd = i;
//         }
//     }

//     cout << gcd << endl;
//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= M. Lucky Numbers ==============================
// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool isDigit4or7(int num)
// {
//     int lastDigit;

//     while (num != 0)
//     {
//         lastDigit = num % 10;

//         if (lastDigit == 4 || lastDigit == 7)
//         {
//             num /= 10;

//             if (num == 0)
//             {
//                 return true;
//             }

//             continue;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int A, B;
//     cout << "Please enter two numbers A & B: " << endl;
//     cin >> A >> B;

//     int min_num = min(A, B);
//     int max_num = max(A, B);

//     bool flag = false;

//     for (int i = min_num; i <= max_num; i++)
//     {
//         if (isDigit4or7(i))
//         {
//             cout << i << " ";
//             flag = true;
//         }
//     }

//     if (flag)
//     {
//         return 0;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================ N. Numbers Histogram ===========================
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     char S;
//     cout << "Please enter a symbol (+, -, /, *): ";
//     cin >> S;

//     int N;
//     cout << "Please enter the count of numbers: ";
//     cin >> N;

//     vector<int> numbers = {};
//     int X;

//     cout << "Please enter " << N << " integers numbers: ";
//     for (int i = 0; i < N; i++)
//     {
//         cin >> X;
//         numbers.push_back(X);
//     }

//     int size = numbers.size();

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < numbers.at(i); j++)
//         {
//             cout << S;
//         }
//         cout << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================= O. Pyramid ================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows = {};
//     cout << "Please enter the count of rows: ";
//     cin >> rows;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================== P. Shape1 ================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows = {};
//     cout << "Please enter the count of rows: ";
//     cin >> rows;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = rows; j > i; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================= Q. Digits =================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "Please enter a number: ";
//     cin >> N;

//     int lastDigit = {};
//     while (N != 0)
//     {
//         lastDigit = N % 10;
//         cout << lastDigit << " ";
//         N /= 10;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ====================== R. Sequence of Numbers and Sum =======================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int N, M;
//     cout << "Please enter two numbers: ";
//     cin >> N >> M;

//     if (N > 0 && M > 0)
//     {
//         int small_num = min(N, M);
//         int big_num = max(N, M);
//         int sum = 0;

//         for (int i = small_num; i <= big_num; i++)
//         {
//             sum += i;
//             cout << i << " ";
//         }
//         cout << "sum = " << sum << endl;
//     }
//     else
//     {
//         cout << "Sorry! .. We expect two numbers above zero!" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ===================== S. Sum of Consecutive Odd Numbers =====================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int X, Y;
//     cout << "Please enter two numbers: ";
//     cin >> X >> Y;

//     int small_num = min(X, Y);
//     int big_num = max(X, Y);
//     int sum = 0;

//     for (int i = small_num + 1; i < big_num; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//     }

//     cout << sum;
//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================== T. Shape2 ================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows = {};
//     cout << "Please enter the count of rows: ";
//     cin >> rows;

//     for (int i = 1; i <= rows; ++i)
//     {
//         for (int j = rows; j > i; j--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (i * 2) - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ================================ U. Some Sums ===============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N, A, B;
//     cout << "Please enter three numbers: ";
//     cin >> N >> A >> B;

//     int sumDigits = 0;
//     int sum;
//     int lastDigit = {};
//     int tem = {};

//     for (int i = 1; i <= N; i++)
//     {
//         sum = 0;
//         tem = i;
//         while (tem != 0)
//         {
//             lastDigit = tem % 10;
//             sum += lastDigit;
//             tem /= 10;
//         }
//         if (sum >= A && sum <= B)
//         {
//             sumDigits += i;
//         }
//     }

//     cout << sumDigits << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =================================== V. PUM ==================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Please enter a number: ";
//     cin >> num;

//     int pum = 0;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             if (j + pum < 10)
//             {
//                 cout << "0" << j + pum << " ";
//             }
//             else
//             {
//                 cout << j + pum << " ";
//             }
//         }
//         cout << "PUM" << endl;
//         pum += 4;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ================================= W. Shape3 =================================

// #include <iostream>
// using namespace std;

// int main()
// {

//     int rows = {};
//     cout << "Please enter a number (rows): ";
//     cin >> rows;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows; j > i; j--)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (2*i)-1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = rows; i >= 1; i--)
//     {
//         for (int j = i; j < rows; j++)
//         {
//             cout << " ";
//         }

//         for (int j = (2 * i) - 1; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =========================== X. Convert To Decimal 2 =========================

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int num;
//     cout << "Please enter a number: ";
//     cin >> num;

//     string binary = "";
//     while (num != 0)
//     {
//         binary = to_string(num % 2) + binary;
//         num /= 2;
//     }

//     int size = binary.size();
//     string binaryOnes = "";
//     for (int i = 0; i < size; i++)
//     {
//         if (binary[i] != '0')
//         {
//             binaryOnes = binary[i] + binaryOnes;
//         }
//     }

//     int length = binaryOnes.length();
//     int decimal = 0;

//     for (int i = 0; i < length; i++)
//     {
//         decimal += (1 * pow(2, i));
//     }

//     cout << binary << endl;
//     cout << binaryOnes << endl;
//     cout << decimal << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== Y. Easy Fibonacci ============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "\nPlease enter a number: ";
//     cin >> num;

//     int a = 0, b = 1;
//     int next = {};

//     for (int i = 0; i < num; i++)
//     {
//         if (i == 0)
//         {
//             cout << a << " ";
//             continue;
//         }
//         else if (i == 1)
//         {
//             cout << b << " ";
//             continue;
//         }
//         next = a + b;
//         a = b;
//         cout << next << " ";
//         b = next;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== Z. Three Numbers ============================

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int K, S;
//     cout << "Please enter two numbers: ";
//     cin >> K >> S;

//     int X, Y, Z;
//     int count = 0;
//     for (int i = 0; i <= K; i++)
//     {
//         X = i;
//         for (int j = 0; j <= K; j++)
//         {
//             Y = j;
//             for (int q = 0; q <= K; q++)
//             {
//                 Z = q;
//                 if (X + Y + Z == S)
//                 {
//                     count++;
//                 }
//             }
//         }
//     }

//     cout << count << endl;

//     return 0;
// }

//// =============================================================================
//// ================================= Contest #1 ================================
//// =============================================================================
//// ================================ A. Winter Sale =============================

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     float X, P, S;

//     cout << "Please enter two numbers X% & P in range (1 =< X <= 99 , 1 =< P <= 4 * 10^4):\n";
//     cin >> X >> P;

//     S = (100 * P) / (100 - X);

//     cout << fixed << setprecision(2) << "The price of the T-shirt before the discount is: " << S << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= B. Memo and Momo ==============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, k;
//     cout << "Please enter three numbers in range (1 =< a,b,k <= 10^18)\n";
//     cin >> a >> b >> k;

//     if (a % k == 0 && b % k == 0)
//     {
//         cout << "Both Win!" << endl;
//     }
//     else if (a % k == 0 && b % k != 0)
//     {
//         cout << "Memo Win!" << endl;
//     }
//     else if (a % k != 0 && b % k == 0)
//     {
//         cout << "Momo Win!" << endl;
//     }
//     else
//     {
//         cout << "No One Win!" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== C. Next Alphabet ============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     char C;
//     cout << "Please give a lowercase alphabet character: " << endl;
//     cin >> C;

//     cout << ++C << endl;
//     cout << char(int(C) + 1) << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================ D. Ali Baba and Puzzles ========================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c, d;
//     cout << "PLease enter four integers numbers a, b, c & d: ";
//     cin >> a >> b >> c >> d;

//     if (a + b - c == d) {
//         cout << "YES" << endl;
//     }
//     else if (a + b * c == d)
//     {
//         cout << "YES" << endl;
//     }
//     else if (a - b + c == d)
//     {
//         cout << "YES" << endl;
//     }
//     else if (a - b * c == d)
//     {
//         cout << "YES" << endl;
//     }
//     else if (a * b + c == d)
//     {
//         cout << "YES" << endl;
//     }
//     else if (a * b - c == d)
//     {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }

//         return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================== E. Interval Sweep ============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     // cout << "PLease enter two integer numbers: " << endl;
//     cin >> num1 >> num2;

//     if ((num1 == 0 && num2 == 0) || abs(num1 - num2) >= 2)
//     {
//         cout << "NO" << endl;
//     }
//     else
//     {
//         cout << "Yes" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== F. Adding Bits ===============================

// #include <iostream>
// using namespace std;
// int main()
// {
//         int A, B, C;
//         cout << "Please enter two integers numbers: " << endl;
//         cin >> A >> B;

//         C = A ^ B;

//         cout << C << endl;

//         return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= H. Data Type Guessing =========================

// #include <iostream>
// using namespace std;

// int main()
// {
//     double n, k, a;
//     double sum;

//     cout << "Please enter three numbers n, k, a: " << endl;
//     cin >> n >> k >> a;

//     sum = (n * k) / a;
//     cout << fixed << sum << endl;

//     if (sum <= 2147483647)
//     {
//         cout << "int" << endl;
//     }
//     else if (sum <= 1234567890123456789)
//     {
//         cout << "long long" << endl;
//     }
//     else
//     {
//         cout << "double" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== G. Katryoshka ===============================

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n, m, b, k = 0;
//     cout << "Please enter 3 numbers n for eyes, m for mouths & k for bodies: " << endl;
//     cin >> n >> m >> b;

//     while (n != 0 && b != 0)
//     {
//         if (n >= 1 && m >= 1 && b >= 1)
//         {
//             ++k;
//             --n;
//             --m;
//             --b;
//         }
//         else if (n >= 2 && b >= 1)
//         {
//             ++k;
//             n -= 2;
//             --b;
//         }
//         else if (n >= 2 && m >= 1 && b >= 1)
//         {
//             ++k;
//             n -= 2;
//             --m;
//             --b;
//         }
//         else {
//             break;
//         }

//     }

//     cout << k << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== I. Lucky Numbers =============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     short N, d1, d2;
//     cout << "Please give a number between 10 and 99: ";
//     cin >> N;

//     d1 = N % 10;
//     d2 = N / 10;

//     if (d1 % d2 == 0 || d2 % d1 == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
