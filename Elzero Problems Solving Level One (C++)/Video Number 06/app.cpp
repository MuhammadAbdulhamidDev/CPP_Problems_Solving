// ====================================================================== //
// ============================= Problem 01 ============================= //
// ============================ Keep Hydrated! ========================== //

// #include <iostream>
// using namespace std;

// short litres(double time)
// {

//     short litres;

//     litres = 0.5 * time;

//     return litres;
// }

// int main()
// {

//     short time;
//     cout << "Please enter the nnumber of the cycling hours: ";
//     cin >> time;

//     cout << "time = " << time << " ----> " << " litres = " << litres(time) << endl;

//     return 0;
// }

// ====================================================================== //
// ============================= Problem 02 ============================= //
// ======================= Beginner – Reduce But Grow =================== //

// #include <iostream>
// #include <vector>
// using namespace std;

// int grow(vector<int> my_vector)
// {
//     int result = 1;
//     for (short num : my_vector)
//     {
//         result *= num;
//     }

//     return result;
// }

// int main()
// {

//     vector<int> my_vector;
//     short number;

//     cout << "To break the cin loop .. Enter non-numeric data" << endl;
//     cout << "Please enter a list of integers: " << endl;

//     while (cin >> number)
//     {
//         if (number != 0) 
//             my_vector.push_back(number);
//     }

//     cout << "The result of multiplying the values together in order is: " << grow(my_vector) << endl;

//     return 0;
// }
