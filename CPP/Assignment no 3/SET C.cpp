// 1) Write a C++ program to calculate multiplication of two integer numbers of two different 
// classes. (Use friend class)


#include <iostream>
using namespace std;

class ClassA; // Forward declaration

class ClassB {
private:
    int b;
public:
    ClassB(int x) {
        b = x;
    }

    friend class ClassA; // Friend class declaration
};

class ClassA {
private:
    int a;
public:
    ClassA(int x) {
        a = x;
    }

    int multiply(ClassB obj) {
        return a * obj.b;
    }
};

int main() {
    ClassA obj1(5);
    ClassB obj2(10);

    cout << "Multiplication of obj1 and obj2 is: " << obj1.multiply(obj2) << endl;

    return 0;
}


