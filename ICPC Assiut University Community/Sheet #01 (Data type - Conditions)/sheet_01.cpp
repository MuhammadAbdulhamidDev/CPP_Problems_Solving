//// =============================================================================
//// =============================================================================
//// =========================== A. Say Hello With C++ ===========================

// #include <iostream>
// using namespace std;

// int main()
// {
//     string name;
//     cout << "Please enter your name: ";
//     cin >> name;

//     cout << "Hello, " << name << endl;
//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= B. Basic Data Types ===========================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i_num;
//     long long ll_num;
//     char ch;
//     float f_num;
//     double d_num;

//     cout << "Please enter values for int, long long, char, float and double respectively: " << endl;
//     cin >> i_num >> ll_num >> ch >> f_num >> d_num;

//     cout << i_num << endl;
//     cout << ll_num << endl;
//     cout << ch << endl;
//     cout << f_num << endl;
//     cout << d_num << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= C. Simple Calculator ==========================

// #include <iostream>
// using namespace std;

// int main()
// {

//     int x, y;
//     cout << "Please enter two numbers in range of (1 : 10^5): " << endl;
//     cin >> x >> y;

//     cout << "X + Y = " << x + y << endl;
//     cout << "X - Y = " << x - y << endl;
//     cout << "X * Y = " << x * y << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ================================ D. Difference ==============================

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a, b, c, d, x;
//     cout << "Please enter four numbers in range of (-10^5 : 10^5): " << endl;
//     cin >> a >> b >> c >> d;

//     x = (a * b) - (c * d);

//     cout << "Difference = " << x << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= E. Area of a Circle ===========================

// #include <iostream>
// #include <iomanip>

// #define PI 3.141592653

// using namespace std;

// int main()
// {
//     float radius;
//     double area;

//     cout << "Please enter the diameter of the circle: ";
//     cin >> radius;

//     area = PI * (radius * radius);

//     cout << fixed << setprecision(9) << "The area of the circle is: " << area << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ============================= F. Digits Summation ===========================
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     short N, M, sum = 0;
//     cout << "Please enter two number in range of (0 : 10^18): " << endl;
//     cin >> N >> M;

//     sum = N % 10;
//     sum += M % 10;

//     cout << "The summation of the last digits is: " << sum << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =========================== G. Summation from 1 to N ========================
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int N, sum = 0;

//     cout << "Please enter a number in range of (1 : 10^9): ";
//     cin >> N;

//     while(N != 0) {
//         sum += N;
//         --N;
//     }

//     cout << "the summation of the numbers that are between 1 and N is: " << sum << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================== H. Two numbers ==============================

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     float A, B;
//     cout << "Please enter two number in range of (1 : 1^3) : " << endl;
//     cin >> A >> B;

//     cout << "Floor result: " << floor(A / B) << endl;
//     cout << "Ceil result: " << ceil(A / B) << endl;
//     cout << "Round result: " << round(A / B) << endl;

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ====================== I. Welcome for you with Conditions ===================

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     short A, B;
//     cout << "Please enter two numbers in range of (0 <= A, B <= 100): " << endl;
//     cin >> A >> B;

//     if (A >= B) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ================================ J. Multiples ===============================
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int A, B;
//     cout << "Please enter two numbers in range of (0 <= A, B <= 10^6): " << endl;
//     cin >> A >> B;

//     if (A % B == 0 || B % A == 0)
//     {
//         cout << "Multiples" << endl;
//     }
//     else
//     {
//         cout << "Not Multiples" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== K. Max and Min ==============================
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//         int A, B, C;
//         cout << "Please enter three numbers in range of (-10^5 <= A,B,C <= 10^6): " << endl;
//         cin >> A >> B >> C;

//         int min, max;

//         if(A > B && A > C) {
//             max = A;
//         }
//         else if (B > A && B > C) {
//             max = B;
//         } else {
//             max = C;
//         }

//         if (A < B && A < C)
//         {
//             min = A;
//         }
//         else if (B < A && B < C)
//         {
//             min = B;
//         }
//         else
//         {
//             min = C;
//         }

//         cout << "The maximum number is: " << max << endl;
//         cout << "The minimum number is: " << min << endl;

//         return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================== L. The Brothers =============================
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string first_name, second_name;
//     cout << "Please enter your name: ";
//     getline(cin, first_name);
//     cout << "Please enter your name: ";
//     getline(cin, second_name);

//     if (first_name.substr(first_name.find(' ')) == second_name.substr(second_name.find(' ')))
//     {
//         cout << "Your are brothers!" << endl;
//     }
//     else
//     {
//         cout << "Your are not brothers!" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ======================== M. Capital or Small or Digit =======================
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     char ch;

//     cout << "Enter any char from ASCII Table: ";
//     cin >> ch;

//     if (int(ch) >= 0 && int(ch) < 65)
//     {
//         cout << "IS DIGIT" << endl;
//     }
//     else if (int(ch) >= 65 && int(ch) < 97)
//     {
//         cout << "ALPHA" << endl;
//         cout << "IS CAPITAL" << endl;
//     }
//     else if (int(ch) >= 97 && int(ch) <= 122)
//     {
//         cout << "ALPHA" << endl;
//         cout << "IS SMALL" << endl;
//     }
//     else {
//         cout << "Sorry! ... we don't cover this." << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =================================== N. Char =================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch;

//     cout << "Please enter any letter: ";
//     cin >> ch;

//     if (int(ch) >= 65 && int(ch) < 97)
//     {
//         cout << char(int(ch) + 32) << endl;
//     }
//     else if (int(ch) >= 97 && int(ch) <= 122)
//     {
//         cout << char(int(ch) - 32) << endl;
//     }
//     else {
//         cout << "Sorry! ... You should enter a letter." << endl;
//     }

//         return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== O. Calculator ===============================
// #include <iostream>
// using namespace std;

// int main()
// {
//     float A, B, result;
//     cout << "Please insert two numbers A & B in range of (1 =< A,B <= 10^4):\n";
//     cin >> A >> B;

//     char S;
//     cout << "Please insert the symbol of the mathematical operations: ";
//     cin >> S;

//     switch (S)
//     {
//         case '+':
//             result = A + B;
//             break;
//         case '-':
//             result = A - B;
//             break;
//         case '*':
//             result = A * B;
//             break;
//         case '/':
//             result = A / B;
//             break;
//         default:
//             result = A + B;
//             break;
//     }

//     cout << "The result is: " << result << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== P. First digit ! =============================
// #include <iostream>
// using namespace std;

// int main()
// {
//     short X, first_digit;
//     cout << "PLease enter a number in range of (999 < X <= 9999): ";
//     cin >> X;

//     first_digit = X / 1000;

//     if(first_digit % 2 == 0) {
//         cout << "EVEN" << endl;
//     }
//     else {
//         cout << "ODD" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =========================== Q. Coordinates of a Point =======================
// #include <iostream>
// using namespace std;

// int main()
// {
//     float X, Y;
//     cout << "Please enter two number: " << endl;
//     cin >> X >> Y;

//     if (X == 0 && Y == 0)
//     {
//         cout << "Origem" << endl;
//     }
//     else if (X > 0 && Y > 0)
//     {
//         cout << "Q1" << endl;
//     }
//     else if (X < 0 && Y > 0)
//     {
//         cout << "Q2" << endl;
//     }
//     else if (X < 0 && Y < 0)
//     {
//         cout << "Q3" << endl;
//     }
//     else if (X > 0 && Y < 0)
//     {
//         cout << "Q4" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== R. Age in Days ==============================
// #include <iostream>
// using namespace std;

// int main()
// {
//     short N, years, months, days;
//     cout << "Please insert your age in days: " << endl;
//     cin >> N;

//     years = N / 365;
//     N -= (years * 365);
//     months = N / 30;
//     N -= (months * 30);
//     days = N;

//     cout << years << " years" << endl;
//     cout << months << " months" << endl;
//     cout << days << " days" << endl;

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// =================================== S. Interval =============================
// #include <iostream>
// using namespace std;

// int main()
// {
//     float X;
//     cout << "Please enter a number: ";
//     cin >> X;

//     if (X >= 0 && X <= 25) {
//         cout << "Interval [0,25]" << endl;
//     }
//     else if (X > 25 && X <= 50) {
//         cout << "Interval (25,50]" << endl;
//     }
//     else if (X > 50 && X <= 75)
//     {
//         cout << "Interval (50,75]" << endl;
//     }
//     else if (X > 75 && X <= 100)
//     {
//         cout << "Interval (75,100]" << endl;
//     }
//     else{
//         cout << "Out of Intervals" << endl;
//     }

//         return 0;
// }
//// =============================================================================
//// =============================================================================
//// =============================== T. Sort Numbers =============================

// #include <iostream>
// using namespace std;

// int main()
// {

//     int A, B, C, max, mid, min;

//     cout << "Please insert 3 numbers: " << endl;
//     cin >> A >> B >> C;

//     cout << "=======================================\n";

//     if (A >= B && A >= C)
//     {
//         max = A;
//         mid = (B >= C) ? B : C;
//         min = (B >= C) ? C : B;
//     }
//     else if (B >= A && B >= C)
//     {
//         max = B;
//         mid = (A >= C) ? A : C;
//         min = (A >= C) ? C : A;
//     }
//     else if (C >= A && C >= B)
//     {
//         max = C;
//         mid = (A >= B) ? A : B;
//         min = (A >= B) ? B : A;
//     }
//     cout << "\n=======================================\n";
//     cout << min << endl;
//     cout << mid << endl;
//     cout << max << endl;
//     cout << "=======================================\n";

//     cout << "\n=======================================\n";
//     cout << A << endl;
//     cout << B << endl;
//     cout << C << endl;
//     cout << "=======================================\n\n";

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// =============================== U. Float or int =============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     float N;
//     cout << "Please enter a number: ";
//     cin >> N;

//     if(int(N) == N) {
//         cout << "int " << int(N) << endl;
//     }
//     else {
//         cout << "float " << N << endl;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ================================ V. Comparison ==============================

// #include <iostream>
// using namespace std;

// int main()
// {

//     short A, B;
//     cout << "PLease enter two numbers A & B: " << endl;
//     cin >> A >> B;

//     char S;
//     cout << "Please enter the comparsion operator: ";
//     cin >> S;

//     switch (S)
//     {
//     case '=':
//         if (A == B)
//             cout << "Right" << endl;
//         else
//             cout << "Wrong" << endl;
//         break;
//     case '>':
//         if (A > B)
//             cout << "Right" << endl;
//         else
//             cout << "Wrong" << endl;
//         break;
//     case '<':
//         if (A < B)
//             cout << "Right" << endl;
//         else
//             cout << "Wrong" << endl;
//         break;
//     }

//     return 0;
// }

//// =============================================================================
//// =============================================================================
//// ========================== W. Mathematical Expression =======================

// #include <iostream>
// using namespace std;

// int main()
// {

//     int A, B, C;
//     char S, Q;
//     cout << "Please give a mathematical expression .. A + B = C || A - B = C || A * B = C:\n";
//     cin >> A >> S >> B >> Q >> C;

//     if ((S == '+' || S == '-' || S == '*') && Q == '=')
//     {
//         int result = 0;

//         switch (S)
//         {
//         case '+':
//             result = A + B;
//             break;
//         case '-':
//             result = A - B;
//             break;
//         case '*':
//             result = A * B;
//             break;
//         }

//         if (result == C)
//         {
//             cout << "Expression is correct." << endl;
//         }
//         else
//         {
//             cout << "Expression is incorrect." << endl;
//             cout << "To correct the expression: C = " << result << endl;
//         }
//     }
//     else
//     {
//         cout << "Invalid expression format." << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================== X. Two intervals ============================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int l1, r1, l2, r2;
//     cout << "Please enter 4 number where where (1 =< l1,l2,r1,r2 <= 10^9), (l1 =< r1, l2 <= r2):\n";
//     cin >> l1 >> r1 >> l2 >> r2;

//     if (r1 >= l1 && r2 >= l2)
//     {
//         if (l2 >= l1 && l2 <= r1)
//         {
//             cout << "[ "<< l2 << " , " << r1 << " ]" << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     else
//     {
//         cout << "Out the range .. Try again!" << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ============================= Y. The last 2 digits ==========================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int A, B, C, D, R, L;
//     cout << "Please enter four numbers: " << endl;
//     cin >> A >> B >> C >> D;

//     R = A * B * C * D;

//     if (R % 100 == 0)
//     {
//         L = R % 100;
//         cout << "The last 2 digits is: " << L << L << endl;
//     }
//     else
//     {
//         L = R % 100;
//         cout << "The last 2 digits is: " << L << endl;
//     }

//     return 0;
// }
//// =============================================================================
//// =============================================================================
//// ================================ Z. Hard Compare ============================

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int A, B, C, D;
//     cout << "Please enter four numbers: " << endl;
//     cin >> A >> B >> C >> D;

//     if (pow(A, B) > pow(C, D))
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
