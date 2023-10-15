/*
\n xuong dong
<< endl xuong dong

\t Tạo một tab ngang
\\ Chèn ký tự dấu gạch chéo ngược (\)
\' Chèn ký tự trích dẫn đơn
\" Chèn ký tự trích dẫn kép

type variableName = value;
int myNum = 5;               // 2-4byte Integer (whole number)
float myFloatNum = 5.99;     // 4byte Floating point number
double myDoubleNum = 9.98;   // 8byte Floating point number
char myLetter = 'D';         // 1byte Character
bool myBoolean = true;       // 1byte Boolean
string myText = "Hello";     // 1byte String

<< toan tu chen dau ra
>> toan tu trich xuat nhap vao
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  cout << endl;

  //___ Pointers ___


  //___ Memory Address ___
  // string food = "Pizza";
  // cout << &food; // Outputs 0x6dfed4 ect

  //___ References ___
  // string food = "Pizza";
  // string &meal = food;

  // cout << food << "\n";  // Outputs Pizza
  // cout << meal << "\n";  // Outputs Pizza

  //___ Structure ___
  // // Create a structure variable called myStructure
  // struct {
  //   int myNum;
  //   string myString;
  // } myStructure0;

  // // Assign values to members of myStructure
  // myStructure0.myNum = 1;
  // myStructure0.myString = "Hello World!";

  // // Print members of myStructure
  // cout << myStructure0.myNum << "\n";
  // cout << myStructure0.myString << "\n";

  // // Multiple structure variables separated with commas
  // struct {
  //   int myNum;
  //   string myString;
  // } myStruct1, myStruct2, myStruct3;

  // //Use one structure to represent two cars:
  // struct {
  //   string brand;
  //   string model;
  //   int year;
  // } myCar1, myCar2; // We can add variables by separating them with a comma here

  // // One Structure in Multiple Variables
  // // Put data into the first structure
  // myCar1.brand = "BMW";
  // myCar1.model = "X5";
  // myCar1.year = 1999;

  // // Put data into the second structure
  // myCar2.brand = "Ford";
  // myCar2.model = "Mustang";
  // myCar2.year = 1969;

  // // Print the structure members
  // cout << "One Structure in Multiple Variables:" << "\n";
  // cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  // cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  // // Named Structures
  // // Declare a structure named "car"
  // struct car {
  //   string brand;
  //   string model;
  //   int year;
  // };

  // car myCar0;
  // myCar0.brand = "BMW";
  // myCar0.model = "X5";
  // myCar0.year = 1999;

  // cout << "Named Structures:" << "\n";
  // cout << myCar0.brand << " " << myCar0.model << " " << myCar0.year << "\n";

  //___ Arrays ___
  // string cars0[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  // cars0[0] = "Opel";
  // cout << cars0[0] << "\n";

  // string cars1[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  // for (int i = 0; i < 5; i++) {
  //   cout << i << " = " << cars1[i] << "\n";
  // }

  // int myNumbers0[5] = {10, 20, 30, 40, 50};
  // for (int i : myNumbers0) {
  //   cout << i << "\n";
  // }

  // string cars2[] = {"Volvo", "BMW", "Ford"}; // Three array elements
  // cout << cars2 << "\n";
  // for (string i : cars2) {
  //   cout << i << "\n";
  // }

  // //Omit Array Size
  // string cars[5];
  // cars[0] = "Volvo";
  // cars[1] = "BMW";
  // cout << cars[0] << "\n";
  // cout << cars[1] << "\n";
  // cout << cars[2] << "\n";
  // cout << cars[3] << "\n";
  // cout << cars[4] << "\n";

  // //Array Size
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // cout << sizeof(myNumbers) << "\n";

  // int getArrayLength = sizeof(myNumbers) / sizeof(int);
  // cout << getArrayLength << "\n";

  // for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
  //   cout << myNumbers[i] << "\n";
  // }

  // for (int i : myNumbers) {
  //   cout << i << "\n";
  // }

  // //Multi-Dimensional Arrays
  // string letters0[2][4];

  // string letters1[2][4] = {
  //   { "A", "B", "C", "D" },
  //   { "E", "F", "G", "H" }
  // };

  // string letters2[2][2][2] = {
  //   {
  //     { "A", "B" },
  //     { "C", "D" }
  //   },
  //   {
  //     { "E", "F" },
  //     { "G", "H" }
  //   }
  // };

  // string letters3[2][4] = {
  //   { "A", "B", "C", "D" },
  //   { "E", "F", "G", "H" }
  // };
  // letters3[0][0] = "Z";

  // cout << letters3[0][0] << "\n";  // Now outputs "Z" instead of "A"

  // string letters[2][4] = {
  //   { "A", "B", "C", "D" },
  //   { "E", "F", "G", "H" }
  // };

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     cout << letters[i][j] << i << j << "\n";
  //   }
  // } 

  // string letters4[2][2][2] = {
  //   {
  //     { "A", "B" },
  //     { "C", "D" }
  //   },
  //   {
  //     { "E", "F" },
  //     { "G", "H" }
  //   }
  // };

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     for (int k = 0; k < 2; k++) {
  //       cout << letters4[i][j][k] << i << j << k << "\n";
  //     }
  //   }
  // } 

  // //Battleship Game
  // // We put "1" to indicate there is a ship.
  // int hit_size = 2;
  // bool ships[2][2] = {
  //   { 0, 1},
  //   { 1, 0},
  // };

  // // Keep track of how many hits the player has and how many turns they have played in these variables
  // int hits = 0;
  // int numberOfTurns = 0;

  // // Allow the player to keep going until they have hit all four ships
  // while (hits < 2) {
  //   int row, column;

  //   cout << "Selecting coordinates\n";

  //   // Ask the player for a row
  //   cout << "Choose a row number between 0 and " << hit_size - 1 << ": ";
  //   cin >> row;

  //   // Ask the player for a column
  //   cout << "Choose a column number between 0 and " << hit_size - 1 << ": ";
  //   cin >> column;

  //   // Check if a ship exists in those coordinates
  //   if (ships[row][column]) {
  //     // If the player hit a ship, remove it by setting the value to zero.
  //     ships[row][column] = 0;

  //     // Increase the hit counter
  //     hits++;

  //     // Tell the player that they have hit a ship and how many ships are left
  //     cout << "Hit! " << (hit_size-hits) << " left.\n\n";
  //   } else {
  //     // Tell the player that they missed
  //     cout << "Miss\n\n";
  //   }

  //   // Count how many turns the player has taken
  //   numberOfTurns++;
  // }

  // cout << "Victory!\n";
  // cout << "You won in " << numberOfTurns << " turns";

  //___ For Loop ___
  // cout << "For ex0" << "\n";
  // for (int i = 0; i < 5; i++){
  //   cout << i << "\n";
  // }

  // cout << "For ex1" << "\n";
  // for (int i = 0; i <= 10; i = i + 2) {
  //   cout << i << "\n";
  // }

  // // Outer loop
  // cout << "Nested Loops" << "\n";
  // for (int i = 1; i <= 2; ++i) {
  //   cout << "Outer: " << i << "\n"; // Executes 2 times

  //   // Inner loop
  //   for (int j = 1; j <= 3; ++j) {
  //     cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  //   }
  // }

  // cout << "Foreach" << "\n";
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // cout << myNumbers << "\n";
  // for (int i : myNumbers) {
  //   cout << i << "\n";
  // }

  // cout << "Break" << "\n";
  // int i = 0;
  // while (i < 5) {
  //   cout << i << "\n";
  //   i++;
  //   if (i == 2) {
  //     break;
  //   }
  // } 

  // cout << "Continue" << "\n";
  // i = 0;
  // while (i < 5) {
  //   if (i == 2) {
  //     i++;
  //     continue;
  //   }
  //   cout << i << "\n";
  //   i++;
  // } 

  //___ While Loop ___
  // int i = 0;
  // while (i <= 5) {
  //   cout << i << "\n";
  //   i++;
  // }

  // i = 0;
  // do {
  //   cout << i << "\n";
  //   i++;
  // }
  // while (i < 5);

  //___ Switch ___
  // int day = 4;
  // switch (day) {
  //   case 6:
  //     cout << "Today is Saturday";
  //     break;
  //   case 7:
  //     cout << "Today is Sunday";
  //     break;
  //   default:
  //     cout << "Looking forward to the Weekend";
  // }

  //___ If ... Else ___
  // int time0 = 22;
  // if (time0 < 10) {
  //   cout << "Good morning.";
  // } else if (time0 < 20) {
  //   cout << "Good day.";
  // } else {
  //   cout << "Good evening.";
  // }

  // int time = 20;
  // string result = (time < 18) ? "Good day." : "Good evening.";
  // cout << result; 

  //___ Booleans ___
  // bool isCodingFun = true;
  // bool isFishTasty = false;
  // cout << isCodingFun << "\n";  // Outputs 1 (true)
  // cout << isFishTasty << "\n";  // Outputs 0 (false) 

  // int myAge0 = 25;
  // int votingAge0 = 18;
  // cout << (myAge0 >= votingAge0) << "\n"; // returns 1 (true), meaning 25 year olds are allowed to vote! 

  // int myAge = 25;
  // int votingAge = 18;
  // if (myAge >= votingAge) {
  //   cout << "Old enough to vote!";
  // } else {
  //   cout << "Not old enough to vote.";
  // }
  // // Outputs: Old enough to vote! 

  //___ Math ___
  // #include <cmath>
  // cout << max(5, 10) << "\n";
  // cout << min(5, 10) << "\n";

  // cout << sqrt(64) << "\n";
  // cout << round(2.6) << "\n";
  // cout << log(2) << "\n";

  // printf("Hello World");

  //___ String ___
  // #include <string>
  
  // string fullNameI;
  // cout << "Type your full name: ";
  // // cin >> fullNameI;
  // getline (cin, fullNameI);
  // // cout << "Your name is: " << fullNameI << "\n";
  // std::cout << "Your name is: " << fullNameI << "\n";

  // string myString = "Hello";
  // cout << "Access Strings: " << myString[0] << "\n";
  // // Outputs H

  // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  // cout << "The length of the txt string is: " << txt.length() << "\n";
  // cout << "The size of the txt string is: " << txt.size() << "\n";

  // string xs = "10";
  // string ys = "20";
  // string zs = xs + ys;   // z will be 1020 (a string) 
  // cout << zs << "\n";

  // string firstName = "John ";
  // string lastName = "Doe";
  // // string fullName = firstName.append(lastName);
  // string fullName = firstName + lastName;
  // cout << fullName << "\n";
  // cout << firstName + lastName << "\n";

  //___ Operators ___
  /*
    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators
  */

  // int x = 0;
  // ++ x;
  // cout << x;

  // int sum1 = 100 + 50;        // 150 (100 + 50)
  // int sum2 = sum1 + 250;      // 400 (150 + 250)
  // int sum3 = sum1 + sum2;     // 800 (400 + 400) 
  // cout << "\n" << sum1 << sum2 << sum3;

  //___ Data types ___
  // string greeting = "Hello";
  // cout << "\n" << greeting; 

  // char a = 65, b = 66, c = 67;
  // cout << "\n" << a;
  // cout << b;
  // cout << c; 

  // bool isCodingFun = true;
  // bool isFishTasty = false;
  // cout << "\n" << isCodingFun; // Outputs 1 (true)
  // cout << "\n" << isFishTasty; // Outputs 0 (false)

  // float f1 = 35e3;
  // double d1 = 12E4;
  // cout << "\n"<< f1;
  // cout << "\n"<< d1;

  //___ Input: cin see-in ___
  // int x_input, y_input;
  // cout << "\n" << "Type x number: "; // Type a number and press enter
  // cin >> x_input;            // Get user input from the keyboard
  // cout << "Type y number: ";
  // cin >> y_input;
  // cout << "Your number is: " << x_input + y_input; // Display the input value

  //___ Constants ___
  // const int minutesPerHour = 60;
  // const float PI = 3.14;

  //___ Variables ___
  // int x, y, z;
  // x = 5, y = 6, z = 50;
  // x = y = z = 50;
  // int myAge = 35;

  //___ Ouput: print(cout see-out) ___
  // cout << "\n"<< x + y + z;
  // cout << "\nI am " << myAge << " years old.";
  // cout << "\n\tHello World!\n";
  return 0;
}