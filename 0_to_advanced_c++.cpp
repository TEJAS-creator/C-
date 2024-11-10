// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int age = 20;                  // Integer
//     float height = 5.9;             // Float
//     double weight = 65.5;           // Double
//     char grade = 'A';               // Character
//     bool isStudent = true;          // Boolean
//     string name = "Tejas";          // String (requires <string>)

//     cout << "Name: " << name << endl;
//     cout << "Age: " << age << endl;
//     cout << "Height: " << height << " feet" << endl;
//     cout << "Weight: " << weight << " kg" << endl;
//     cout << "Grade: " << grade << endl;
//     cout << "Is Student: " << isStudent << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10, b = 3;
//     cout << "a + b = " << (a + b) << endl;
//     cout << "a - b = " << (a - b) << endl;
//     cout << "a * b = " << (a * b) << endl;
//     cout << "a / b = " << (float)(a / b) << endl;
//     cout << "a % b = " << (a % b) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     string name;
//     cout << "Enter your name: ";
//     cin >> name; // Takes input for a single word (no spaces)
//     cout << "Enter your age: ";
//     cin >> age; // Takes input for an integer
//     cout << "Hello, " << name << "! You are " << age << " years old." << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int age;

//     cout << "Enter your age: ";
//     cin >> age;

//     if (age >= 18) {
//         cout << "You are an adult." << endl;
//     } else if (age >= 13) {
//         cout << "You are a teenager." << endl;
//     } else {
//         cout << "You are a child." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int day;

//     cout << "Enter a day number (1-7): ";
//     cin >> day;

//     switch (day)
//     {
//     case 1:
//         cout << "Monday" << endl;
//         break;
//     case 2:
//         cout << "Tuesday" << endl;
//         break;
//     case 3:
//         cout << "Wednesday" << endl;
//         break;
//     case 4:
//         cout << "Thursday" << endl;
//         break;
//     case 5:
//         cout << "Friday" << endl;
//         break;
//     case 6:
//         cout << "Saturday" << endl;
//         break;
//     case 7:
//         cout << "Sunday" << endl;
//         break;
//     default:
//         cout << "Invalid day number!" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 100;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << i << endl; // if you put n instead of i n gets printed 100 times
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int count = 1;
//     while (count <= 5)
//     {
//         cout << "Count is " << count << endl;
//         count++; // Increment count by 1
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 1;
//     do
//     {
//         cout << "Count is " << count << endl;
//         count++;
//     } while (count <= 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 5)
//         {
//             continue; // Skip printing when i is 5
//         }
//         if (i == 8)
//         {
//             break; // Exit loop when i is 8
//         }
//         cout << i << " "; // " " is used to put space in between each number
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function definition
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int sum = add(5, 3);  // Function call
//     cout << "The sum is: " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello! Welcome to the program." << endl;
// }

// int main() {
//     greet();  // Calls the greet function
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void print(int n) {
//     cout << "Integer: " << n << endl;
// }
// void print(double d) {
//     cout << "Double: " << d << endl;
//}
// int main() {
//     print(10);     // Calls print(int)
//     print(5.5);    // Calls print(double)
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void showValue()
// {
//     int x = 10; // Local variable
//     cout << "x inside function: " << x << endl;
// }

// int main()
// {
//     showValue();
//     // cout << x;  // Error: x is not accessible here
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int numbers[5] = {10, 20, 30, 40, 50};

//     // Printing elements
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Element at index " << i << ": " << numbers[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int numbers[5] = {10, 20, 30, 40, 50};
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         sum += numbers[i]; // Add each element to sum
//     }

//     cout << "Sum of array elements: " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int numbers[5] = {10, 200, 30, 40, 50};
//     int max = numbers[0];

//     for (int i = 1; i < 5; i++)
//     {
//         if (numbers[i] > max)
//         {
//             max = numbers[i];
//         }
//     }

//     cout << "Maximum element in the array: " << max << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int matrix[2][3] = {// A 2x3 matrix (2 rows, 3 columns)
//                         {1, 2, 3},
//                         {4, 5, 6}};
//     // Printing the 2D array
//     for (int i = 0; i < 2; i++)
//     { // Loop over rows
//         for (int j = 0; j < 3; j++)
//         { // Loop over columns
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl; // Move to the next line after printing a row
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

//     // Accessing specific elements
//     cout << "Element at (0, 0): " << matrix[0][0] << endl;
//     cout << "Element at (1, 2): " << matrix[1][2] << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring> // For strlen
// using namespace std;

// int main()
// {
//     char str[] = "Hello";

//     cout << "Length of string: " << strlen(str) << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str1 = "Hello, ";
//     string str2 = "C++";

//     string result = str1 + str2; // Concatenating strings

//     cout << "Concatenated string: " << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     string str1 = "Hello";
//     string str2 = "Hello";
//     string str3 = "World";

//     if (str1 == str2)
//     {
//         cout << "str1 and str2 are equal." << endl;
//     }

//     if (str1 != str3)
//     {
//         cout << "str1 and str3 are not equal." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 10;    // A regular integer variable
//     int *ptr = &num; // Pointer to an integer, initialized to address of num

//     cout << "Value of num: " << num << endl;             // Prints the value of num
//     cout << "Address of num: " << &num << endl;          // Prints the address of num
//     cout << "Value of ptr: " << ptr << endl;             // Prints the address stored in ptr
//     cout << "Value pointed to by ptr: " << *ptr << endl; // Dereferencing the pointer to get the value at the address

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;                             // Pointer to the first element of the array
//     cout << "First element: " << *ptr << endl;  // Dereference ptr to get first element
//     ptr++;                                      // Increment pointer to point to next element
//     cout << "Second element: " << *ptr << endl; // Dereference ptr to get second element
//     ptr += 2;                                   // Move the pointer ahead by 2 positions
//     cout << "Fourth element: " << *ptr << endl; // Dereference ptr to get fourth element
//     return 0;
// }

// // Write a file
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     // Creating an ofstream object to write to a file
//     ofstream outFile("example.txt");

//     // Check if the file is open
//     if (outFile.is_open())
//     {
//         // Writing to the file
//         outFile << "Hello, World!" << endl;
//         outFile << "This is a test file." << endl;
//         outFile << "Writing to a file in C++." << endl;

//         // Close the file after writing
//         outFile.close();
//         cout << "Data written to file successfully!" << endl;
//     }
//     else
//     {
//         cout << "Unable to open the file!" << endl;
//     }

//     return 0;
// }

// // Read a File
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     // Creating an ifstream object to read from a file
//     ifstream inFile("example.txt");

//     // Check if the file is open
//     if (inFile.is_open())
//     {
//         string line;
//         // Read the file line by line
//         while (getline(inFile, line))
//         {
//             cout << line << endl;
//         }

//         // Close the file after reading
//         inFile.close();
//     }
//     else
//     {
//         cout << "Unable to open the file!" << endl;
//     }

//     return 0;
// }

// learn classes and objects
// learn inheritance
// learn polymorphism
// learn constructors
// learn destructors
// learn abstraction
// learn encapsulation
// learn templates
