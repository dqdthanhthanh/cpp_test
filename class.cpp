#include <iostream>
#include <fstream> 
#include <string>
#include <cmath>

using namespace std;


//___- Classes -___

//___ OOP ___
/*
OOP là viết tắt của Lập trình hướng đối tượng.
Lập trình thủ tục là viết các thủ tục hoặc hàm thực hiện các thao tác trên dữ liệu,
trong khi lập trình hướng đối tượng là tạo các đối tượng chứa cả dữ liệu và hàm.

Lập trình hướng đối tượng có một số ưu điểm so với lập trình thủ tục:
     OOP nhanh hơn và dễ thực thi hơn
     OOP cung cấp cấu trúc rõ ràng cho các chương trình
     OOP giúp giữ mã C++ "Don't Repeat Yourself" (DRY) và làm cho mã dễ bảo trì, sửa đổi và gỡ lỗi hơn
     OOP cho phép tạo các ứng dụng có thể tái sử dụng hoàn toàn với ít mã hơn và thời gian phát triển ngắn hơn

Mẹo: Nguyên tắc "Don't Repeat Yourself" (DRY) là về việc giảm sự lặp lại của mã. 
Bạn nên trích xuất các mã phổ biến cho ứng dụng và đặt chúng vào một nơi duy nhất 
và sử dụng lại thay vì lặp lại.
*/

//___ Classes and Objects ___
/*
VD: Classes: Trai cay; cac loai trai cay: Apple, Banana, Mango
VD: Classes: Xe hoi; cac mau xe: Volvo, Audi, Toyota
Một lớp là một khuôn mẫu cho các đối tượng và một đối tượng là một thể hiện của một lớp.
Khi các đối tượng riêng lẻ được tạo, chúng kế thừa tất cả các biến và hàm từ lớp.

C++ là ngôn ngữ lập trình hướng đối tượng.
Mọi thứ trong C++ đều được liên kết với các lớp và đối tượng,
cùng với các thuộc tính và phương thức của nó. Ví dụ: trong đời thực, ô tô là một đồ vật.
Chiếc xe có các thuộc tính như trọng lượng, màu sắc và các phương thức như lái xe và phanh.
Các thuộc tính và phương thức về cơ bản là các biến và hàm thuộc về lớp.
Những người này thường được gọi là "thành viên của lớp".
Lớp là kiểu dữ liệu do người dùng định nghĩa mà chúng ta có thể sử dụng trong chương trình của mình 
và nó hoạt động như một hàm tạo đối tượng hoặc một "bản thiết kế" để tạo đối tượng.
*/

/*
Class Methods
Phương thức là các hàm thuộc về lớp.
Có hai cách để định nghĩa các hàm thuộc về một lớp:
     Định nghĩa lớp bên trong
     Định nghĩa lớp bên ngoài
*/

/*
Constructors
Hàm tạo trong C++ là một phương thức đặc biệt được gọi tự động khi một đối tượng của lớp được tạo.
Lưu ý: Hàm tạo có cùng tên với lớp, nó luôn công khai và không có bất kỳ giá trị trả về nào.
Thông số hàm tạo:
Trình xây dựng cũng có thể lấy tham số (giống như các hàm thông thường),
điều này có thể hữu ích cho việc đặt giá trị ban đầu cho thuộc tính.
*/

/*
Access Specifiers
Trong C++, có ba bộ xác định quyền truy cập:
     public - các thành viên có thể truy cập được từ bên ngoài lớp học
     private - các thành viên không thể được truy cập (hoặc xem) từ bên ngoài lớp
     protected - các thành viên không thể được truy cập từ bên ngoài lớp, tuy nhiên, 
     chúng có thể được truy cập trong các lớp kế thừa. Bạn sẽ tìm hiểu thêm về Kế thừa sau.
Lưu ý: Theo mặc định, tất cả thành viên của một lớp đều ở chế độ riêng tư 
nếu bạn không chỉ định công cụ xác định quyền truy cập.
*/

/*
Encapsulation
Ý nghĩa của Đóng gói là đảm bảo rằng dữ liệu "nhạy cảm" được ẩn khỏi người dùng. 
Để đạt được điều này, bạn phải khai báo các biến/thuộc tính của lớp là riêng tư 
(không thể truy cập từ bên ngoài lớp). 
Nếu bạn muốn người khác đọc hoặc sửa đổi giá trị của một thành viên riêng tư, 
bạn có thể cung cấp các public get and set methods.

Việc khai báo các thuộc tính lớp của bạn là riêng tư được coi là một cách thực hành tốt 
(thường xuyên nhất có thể). 
Đóng gói đảm bảo kiểm soát dữ liệu của bạn tốt hơn 
vì bạn (hoặc người khác) có thể thay đổi một phần mã mà không ảnh hưởng đến các phần khác
Tăng cường bảo mật dữ liệu
*/

/*
Inheritance
Trong C++, có thể kế thừa các thuộc tính và phương thức từ lớp này sang lớp khác. 
Chúng tôi nhóm "khái niệm thừa kế" thành hai loại:
     derived class (child): lớp dẫn xuất (con) - lớp kế thừa từ lớp khác
     base class (parent): lớp cơ sở (cha) - lớp được kế thừa từ
Để kế thừa từ một lớp, hãy sử dụng ký hiệu :.
- Hữu ích cho khả năng sử dụng lại mã: 
sử dụng lại các thuộc tính và phương thức của một lớp hiện có khi bạn tạo một lớp mới.
*/

/*
Polymorphism
Đa hình có nghĩa là "nhiều dạng" và nó xảy ra khi 
chúng ta có nhiều lớp có liên quan với nhau bằng tính kế thừa.
Giống như chúng tôi đã chỉ ra ở chương trước; 
Kế thừa cho phép chúng ta kế thừa các thuộc tính và phương thức từ một lớp khác. 
Đa hình sử dụng những phương pháp đó để thực hiện các nhiệm vụ khác nhau. 
Điều này cho phép chúng ta thực hiện một hành động theo nhiều cách khác nhau.

Ví dụ, hãy nghĩ về một lớp cơ sở tên là Animal có một phương thức gọi là AnimalSound(). 
Các lớp Động vật có nguồn gốc có thể là Lợn, Mèo, Chó, Chim - 
Và chúng cũng có cách triển khai âm thanh riêng (tiếng lợn kêu và tiếng mèo kêu, v.v.):

- Hữu ích cho khả năng sử dụng lại mã: 
sử dụng lại các thuộc tính và phương thức của một lớp hiện có khi bạn tạo một lớp mới.
*/

/*
File
The fstream library allows us to work with files.
To use the fstream library, include both the standard <iostream> AND the <fstream> header file.

ofstream 	Creates and writes to files
ifstream 	Reads from files
fstream 	A combination of ofstream and ifstream: creates, reads, and writes to files

Close file: It is considered good practice, and it can clean up unnecessary memory space.
*/

/*
Exceptions
Khi thực thi mã C++, các lỗi khác nhau có thể xảy ra: 
lỗi mã hóa do người lập trình thực hiện, 
lỗi do nhập sai hoặc những lỗi không lường trước được khác.

Khi xảy ra lỗi, C++ thường sẽ dừng và tạo ra thông báo lỗi. 
Thuật ngữ kỹ thuật cho việc này là: C++ sẽ đưa ra một ngoại lệ (ném ra lỗi).

Keywords: Try, Throw, Catch:
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
} 
*/

// Create a Class
class MyClass {            // The class
    public:                // Access specifier: Quyen truy cap
    int myNum = 0;         // Attribute (int variable): Thuoc tinh
    string myString = "";  // Attribute (string variable): Thuoc tinh
    MyClass() {            // Constructor
        cout << "This is Class: MyClass" << "\n";
    }
    void pritntText(string txt); // Class Methods
    int sum(int num1, int num2){return num1 + num2;}
    double sum(double num1, double num2){return num1 + num2;}
    private:
    int privateNum = 10;
    string privateString = "Clasess";
};

// Method/function definition outside the class
void MyClass::pritntText(string txt){
    cout << txt << "\n";
}

class Car {
  public:
    string brand;   
    string model;
    int year;
    Car(string x = "Brand", string y = "Model", int z = 0) {
        brand = x;
        model = y;
        year = z;
    }
};

class Employee {
  protected: // Protected access specifier
    int salaryMain;
  private:
    // Private attribute
    int salary;
  public:
    // Setter
    void setSalary(int s) {salary = s;}
    // Getter
    int getSalary() {return salary;}
};

class Programmer: public Employee {
  public:
    int bonus;
    void setSalaryMain(int s) {
      salaryMain = s;
    }
    int getSalaryMain() {
      return salaryMain;
    }
};

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class CarNew: public Vehicle {
  public:
    string model = "Mustang";
};

// Base class (parent)
class MyClassNew {
  public:
    void myFunction() {
      cout << "Some content in parent class." << "\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." << "\n" ;
    }
};

// Derived class (child)
class MyChild: public MyClassNew {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

// Derived class
class MyChildClass: public MyClassNew, public MyOtherClass {
};

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: gow gow \n";
    }
};

int main(){
    // Error var
    // try {
    // int age = 15;
    // if (age >= 18) {
    //     cout << "Access granted - you are old enough.\n";
    // } else {
    //     throw (age);
    // }
    // }
    // catch (int myNum) {
    // cout << "Access denied - You must be at least 18 years old.\n";
    // cout << "Age is: " << myNum << "\n";
    // } 

    // Error code
    // try {
    // int age = 15;
    // if (age >= 18) {
    //     cout << "Access granted - you are old enough.\n";
    // } else {
    //     throw 505;
    // }
    // }
    // catch (int myNum) {
    // cout << "Access denied - You must be at least 18 years old.\n";
    // cout << "Error number: " << myNum << "\n";
    // } 

    // Error for any type of var
    try {
    int age = 15;
    if (age >= 18) {
        cout << "Access granted - you are old enough.\n";
    } else {
        throw 505;
    }
    }
    catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
    } 

    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!\n" << "This is file test.\n";

    // Close the file
    MyFile.close();

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText << "\n";
    }

    // Close the file
    MyReadFile.close(); 

    cout << "Classes and Objects" << "\n";

    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    Programmer myEmNew;
    myEmNew.setSalaryMain(50000);
    myEmNew.bonus = 15000;
    cout << "Salary: " << myEmNew.getSalaryMain() << "\n";
    cout << "Bonus: " << myEmNew.bonus << "\n";

    MyGrandChild myObjChild;
    myObjChild.myFunction();

    MyChildClass myChildClass;
    myChildClass.myFunction();
    myChildClass.myOtherFunction();

    CarNew myCar;
    cout << myCar.brand + " " + myCar.model + ": ";
    myCar.honk();

    Employee myEm;
    myEm.setSalary(50000);
    cout << "Employee Salary: " << myEm.getSalary() << "\n";

    // Create an object of MyClass
    MyClass myObj;

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // Print attribute values
    // cout << myObj.myNum << "\n";
    // cout << myObj.myString << "\n";
    // cout << myObj.sum(12.32,67.8) << "\n";
    myObj.pritntText(to_string(myObj.myNum));
    myObj.pritntText(to_string(myObj.sum(12.32,67.8)));
    myObj.pritntText(myObj.myString);
    myObj.pritntText("Hello MGF!");

    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}