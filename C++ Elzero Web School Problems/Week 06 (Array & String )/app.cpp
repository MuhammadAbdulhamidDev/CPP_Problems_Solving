// ##################################################################################//
// #################################### Task 01 #####################################//
// ##################################################################################//
// #include <iostream>
// #include <array>
// using namespace std;

// int main()
// {
//         int nums[]{100, 300, 600, 900};
//         string awards[]{"iPhone", "iPad", "PC", "Car"};

//         cout << "Number " << nums[0] << " Award Is: " << awards[0] << endl;
//         cout << "Number " << nums[1] << " Award Is: " << awards[1] << endl;
//         cout << "Number " << nums[2] << " Award Is: " << awards[2] << endl;
//         cout << "Number " << nums[3] << " Award Is: " << awards[3] << endl;

//         return 0;
// }
// ##################################################################################//
// #################################### Task 02 #####################################//
// ##################################################################################//
// #include <iostream>
// #include <array>
// using namespace std;

// int main()
// {
//         int filling = 10;
//         int vals[]{100, 200, 300, 400};

//         vals[0] = vals[1] = vals[2] = vals[3] = filling;

//         cout << vals[0] << "\n";  // 10
//         cout << vals[1] << "\n"; // 10
//         cout << vals[2] << "\n"; // 10
//         cout << vals[3] << "\n"; // 10
//         return 0;
// }

// ##################################################################################//
// #################################### Task 03 #####################################//
// ##################################################################################//
// #include <iostream>
// #include <array>

// using namespace std;

// int main()
// {
//         // int vals[] = {100, 200, 600, 200, 100};
//         // int vals[] = {100, 200, 200, 100};
//         int vals[] = {100, 300, 600, 200, 100};

//         if (vals[0] == vals[4] && vals[1] == vals[4])
//         {
//                 cout << "Array Is Palindrome" << endl;
//         }
//         else
//         {
//                 cout << "Array Is Not Palindrome" << endl;
//         }

//         return 0;
// }
// ##################################################################################//
// #################################### Task 04 #####################################//
// ##################################################################################//
// #include <iostream>
// #include <array>
// #include <algorithm>
// #include <cstddef>

// using namespace std;

// int main()
// {
//         array<int, 3> oldNums = {10, 20, 30};
//         array<int, 3> newNums;

//         short length = oldNums.size();
//         short j = 0;

//         for (short i = (length - 1); i >= 0; i--)
//         {
//                 newNums[j] = oldNums[i];
//                 ++j;
//         }
//         for (auto element : newNums)
//         {
//                 cout << element << endl;
//         }

//         return 0;
// }
// ##################################################################################//
// #################################### Task 05 #####################################//
// ##################################################################################//
// #include <iostream>
// #include <array>
// #include <string.h>

// using namespace std;

// int main()
// {
//         string fName = "Elzero ";
//         string mName = "Web ";
//         string lName = "School";

//         cout << fName << mName << lName << endl;

//         cout << fName.append(mName).append(lName) << endl;

//         cout << fName + mName + lName << endl;



//         return 0;
// }

