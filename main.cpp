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
  // return 0;
}