// SET A 

// 1) Write a C++ program to accept length and width of a rectangle. Calculate and display 
// perimeter as well as area of a rectangle by using Inline function

#include <iostream>
using namespace std;

inline int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}

inline int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Perimeter: " << calculatePerimeter(length, width) << endl;
    cout << "Area: " << calculateArea(length, width) << endl;
    return 0;
}

// 2)write a C++ program to define power function to calculate x^y. (Use default value as 2 
// for y)

#include <iostream>
#include <cmath>
using namespace std;

double power(double x, double y = 2) {
    return pow(x, y);
}

int main() {
    double x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y (optional, default value is 2): ";
    cin >> y;
    cout << "x^y = " << power(x, y) << endl;
    return 0;
}

// 3) Write a C++ program to accept and display Bank_Account details as Acc_No, 
// Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of some amount 
// and display modified bank account details. (Use manipulators)

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class BankAccount {
public:
    string Acc_No, Acc_holder_name, Addr, Contact_Number;
    double Balance;

    void display() {
        cout << "Account Number: " << Acc_No << endl;
        cout << "Account Holder Name: " << Acc_holder_name << endl;
        cout << "Address: " << Addr << endl;
        cout << "Contact Number: " << Contact_Number << endl;
        cout << "Balance: " << fixed << setprecision(2) << Balance << endl;
    }

    void deposit(double amount) {
        Balance += amount;
        cout << "Deposit of " << fixed << setprecision(2) << amount << " was successful." << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.Acc_No = "1234567890";
    myAccount.Acc_holder_name = "Vivek Ghule";
    myAccount.Addr = "Near A.M Collage";
    myAccount.Contact_Number = "555-555-1234";
    myAccount.Balance = 10000.00;

    cout << "Bank Account Details:" << endl;
    myAccount.display();

    double depositAmount;
    cout << "Enter the amount you wish to deposit: ";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);

    cout << "Modified Bank Account Details:" << endl;
    myAccount.display();

    return 0;
}






