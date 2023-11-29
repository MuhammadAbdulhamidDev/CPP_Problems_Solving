// =======================================================================
// ============================== Task 01 ================================
// =======================================================================

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> nums = {100, 200, 300, 400};
//     nums.push_back(500);

//     int size = nums.size();

//     for (int i = 0; i < size; i++)
//     {
//         cout << nums.at(i) << endl;
//     }

//     return 0;
// }
// =======================================================================
// ============================== Task 02 ================================
// =======================================================================

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 30, 40};

//     cout << numbers[0] << endl;
//     cout << numbers.at(0) << endl;
//     cout << numbers.front() << endl;
//     auto first = numbers.begin();
//     cout << *first << endl;

//     cout << numbers[3] << endl;
//     cout << numbers.at(3) << endl;
//     cout << numbers.back() << endl;
//     auto last = numbers.end()-1;
//     cout << *last << endl;

//     return 0;
// }
// =======================================================================
// ============================== Task 03 ================================
// =======================================================================

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};

//     auto fir = numbers.begin();
//     cout << *fir << "\n"; // 10

//     auto last = numbers.rbegin();
//     cout << *last << "\n"; // 80

//     return 0;
// }
// =======================================================================
// ============================== Task 04 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<float> floats = {1.5, 3.5, 5.5};
//     vector<int> numbers{10, 20, 30, 40, 50, 60, 70, 80};
//     vector<double> doubles;
//     vector<float>::iterator it;

//     it = floats.begin() + 2;
//     auto last = numbers.rbegin();
//     doubles.push_back(10);

//     cout << *it << "\n";           // 5.5
//     cout << *last << "\n";         // 80
//     cout << doubles.at(0) << "\n"; // 10

//     return 0;
// }
// =======================================================================
// ============================== Task 05 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
//     auto it = numbers.begin();

//     // int size = numbers.size();
//     // it += size / 2;
//     // cout << *it << "\n"; // 50

//     // int distance_to_middle = distance(numbers.begin(), numbers.end()) / 2;
//     // advance(it, distance_to_middle);
//     // cout << *it << "\n"; // 50

//     // int distance_to_middle = distance(numbers.begin(), numbers.end()) / 2;
//     // it = next(it, distance_to_middle);
//     // cout << *it << "\n"; // 50

//     return 0;
// }
// =======================================================================
// ============================== Task 06 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int countEle(vector<int> numbers, int check)
// {
//     int count = 0;
//     int size = numbers.size();

//     for (int i = 0; i < size; i++)
//     {
//         if (numbers.at(i) == check)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     vector<int> numbers = {10, 20, 10, 40, 50, 60, 10, 80};
//     int check = 10;
//     int countone = 0;
//     int counttwo = 0;

//     countone = count(numbers.begin(), numbers.end(), check);
//     cout << countone << "\n"; // 3

//     counttwo = countEle(numbers, check);

//     cout << counttwo << "\n"; // 3
//     return 0;
// }
// =======================================================================
// ============================== Task 07 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 10, 40, 50};

//     // for (int i = 0; i < numbers.size(); i++)
//     // {
//     //     cout << numbers.at(i) << endl;
//     // }

//     for (auto iter = numbers.begin(); iter != numbers.end(); ++iter)
//     {
//         cout << *iter << endl;
//     }

//     return 0;
// }
// =======================================================================
// ============================== Task 08 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 30, 40, 50};
//     vector<int>::iterator iter = numbers.begin();

//     advance(iter, 2);

//     cout << *iter << "\n"; // 30

//     iter = numbers.end() - 1;

//     cout << *iter << "\n"; // 50

//     iter = numbers.begin();

//     cout << *iter << "\n"; // 20

//     return 0;
// }
// =======================================================================
// ============================== Task 09 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
//     int helperone = 2;
//     int helpertwo = 6;

//     numbers.erase(numbers.begin()+helperone, numbers.begin()+helpertwo);

//     for (int i : numbers)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }
// =======================================================================
// ============================== Task 10 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers (100,1000);
//     cout << numbers.at(0) << "\n";  // 1000
//     cout << numbers.at(10) << "\n";  // 1000
//     cout << numbers.at(99) << "\n"; // 1000
//     return 0;
// }
// =======================================================================
// ============================== Task 11 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers(100, 1000);
//     vector<float> floats(100);
//     for (int i = 0; i < 100; i++)
//     {
//         floats.at(i) = 1000;
//     }
//     cout << numbers.at(0) << "\n";  // 1000
//     cout << numbers.at(99) << "\n"; // 1000

//     cout << floats.at(0) << "\n";  // 100.50
//     cout << floats.at(99) << "\n"; // 100.50
//     return 0;
// }
// =======================================================================
// ============================== Task 12 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {10, 20, 30, 40};

//     // numbers.pop_back();
//     // auto it = numbers.end() - 1;
//     // numbers.erase(it);
//     // auto rit = numbers.rbegin();
//     // numbers.erase(rit.base() - 1);

//     // Do Not Edit
//     for (int i : numbers)
//     {
//         cout << i << "\n";
//     }
//     return 0;
// }
// =======================================================================
// ============================== Task 13 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int add(vector<int> numbersone)
// {
//     int sum = 0;
//     for (int i : numbersone)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     vector<int> numbersone = {10, 20, 30};
//     vector<int> numberstwo = {5, 15, 25};

//     cout << add(numbersone) << "\n"; // 60
//     cout << add(numberstwo) << "\n"; // 45

//     return 0;
// }
// =======================================================================
// ============================== Task 14 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> nums = {5, 4, 3, 2, 1};

//     // reverse(nums.begin(), nums.end());

//     // sort(nums.begin(), nums.end());

//     // Method Three -> Use Swap + Loop For Challenge
//     int start = 0;
//     int end = nums.size() - 1;

//     while (start < end)
//     {
//         // Swap elements at start and end indices
//         swap(nums[start], nums[end]);

//         // Move the start index forward
//         start++;

//         // Move the end index backward
//         end--;
//     }

//     for (int i : nums)
//     {
//         cout << i << "\n";
//     }

//     return 0;
// }
// =======================================================================
// ============================== Task 15 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

//     rotate(nums.begin(), nums.begin() + 4, nums.end());

//     for (int i : nums)
//     {
//         cout << i << "\n";
//     }
//     return 0;
// }
// =======================================================================
// ============================== Task 16 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> n1 = {1, 2, 3};
//     vector<int> n2 = {4, 5, 6};

//     // Create a result vector with enough space
//     vector<int> allvectors(n1.size() + n2.size());

//     // Use std::merge to merge the two sorted vectors
//     merge(n1.begin(), n1.end(), n2.begin(), n2.end(), allvectors.begin());

//     for (int i : allvectors)
//     {
//         cout << i << "\n";
//     }
//     return 0;
// }
// =======================================================================
// ============================== Task 17 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> n1 = {1, 2, 3};
//     vector<int> n2 = {4, 5, 6};

//     vector<int> allvectors;

//     allvectors.insert(allvectors.end(), n1.begin(), n1.end());
//     allvectors.insert(allvectors.end(), n2.begin(), n2.end());

//     for (int i : allvectors)
//     {
//         cout << i << "\n";
//     }
//     return 0;
// }
// =======================================================================
// ============================== Task 18 ================================
// =======================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> n1 = {10, 30, 50, 70};
//     vector<int> n2 = {20, 40, 60, 80};

//     vector<int> allvectors(n1.size() + n2.size());

//     merge(n1.begin(), n1.end(), n2.begin(), n2.end(), allvectors.begin());
//     sort(allvectors.begin(), allvectors.end());

//     for (int i : allvectors)
//     {
//         cout << i << "\n";
//     }

//     return 0;
// }