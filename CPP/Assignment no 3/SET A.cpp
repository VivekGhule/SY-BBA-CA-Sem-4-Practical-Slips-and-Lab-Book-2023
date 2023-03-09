//              Assignmrnt no-3
// SET A

// 1) Write a C++ program to create a class Student with data members Roll_No, 
// Student_Name, Class. Write member functions to accept and display Student information 
// also display count of students.(Use Static data member and Static member function)

#include<iostream>
using namespace std;

class Student {
    int Roll_No;
    string Student_Name;
    string Class;
    static int count; // static data member to keep count of students
    
public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> Roll_No;
        cout << "Enter Student Name: ";
        cin >> Student_Name;
        cout << "Enter Class: ";
        cin >> Class;
        count++; // increment count on accepting student information
    }
    
    void display() {
        cout << "Roll Number: " << Roll_No << endl;
        cout << "Student Name: " << Student_Name << endl;
        cout << "Class: " << Class << endl;
    }
    
    static void displayCount() { // static member function to display count
        cout << "Number of Students: " << count << endl;
    }
};

int Student::count = 0; // initialize count to zero

int main() {
    Student s1, s2;
    s1.accept();
    s2.accept();
    s1.display();
    s2.display();
    Student::displayCount(); // access static member function using class name
    return 0;
}





// 2)Write a C++ program to calculate the average height of all the students of a class. The 
// number of students and their heights are entered by user. (Use array of objects)


#include<iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float height;
public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Height: ";
        cin >> height;
    }
    float getHeight() {
        return height;
    }
};

int main() {
    int num;
    float sum = 0.0, avg;
    cout << "Enter the number of students: ";
    cin >> num;
    Student s[num];
    for(int i = 0; i < num; i++) {
        s[i].accept();
        sum += s[i].getHeight();
    }
    avg = sum / num;
    cout << "Average Height of the Class: " << avg << endl;
    return 0;
}






// 3)Write a C++ program to calculate maximum and minimum of two integer numbers of two 
// different classes.(Use friend function)

#include<iostream>
using namespace std;

class A; // Forward declaration

class B {
    int num1;
public:
    void accept() {
        cout << "Enter Number 1: ";
        cin >> num1;
    }
    friend void findMinMax(B obj1, A obj2); // Friend function declaration
};

class A {
    int num2;
public:
    void accept() {
        cout << "Enter Number 2: ";
        cin >> num2;
    }
    friend void findMinMax(B obj1, A obj2); // Friend function declaration
};

// Friend function definition
void findMinMax(B obj1, A obj2) {
    int maxNum, minNum;
    if(obj1.num1 > obj2.num2) {
        maxNum = obj1.num1;
        minNum = obj2.num2;
    }
    else {
        maxNum = obj2.num2;
        minNum = obj1.num1;
    }
    cout << "Maximum Number: " << maxNum << endl;
    cout << "Minimum Number: " << minNum << endl;
}

int main() {
    B obj1;
    A obj2;
    obj1.accept();
    obj2.accept();
    findMinMax(obj1, obj2); // Call to friend function
    return 0;
}


