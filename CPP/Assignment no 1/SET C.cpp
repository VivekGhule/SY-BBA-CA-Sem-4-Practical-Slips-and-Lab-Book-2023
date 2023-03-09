// SET C:


// 1)Write a C++ program to print the following pattern
// *
// * *
// * * *
// * * * *
// * * * * *


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


// 2)Write a C++ program to calculate following series: 
// 1/1! + 2/2! + 3/3! + …. +n/n!

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, fact = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += i / fact;
    }
    cout << "The sum of the series is " << sum << endl;
    return 0;
}
