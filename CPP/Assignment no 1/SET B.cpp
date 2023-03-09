// SET B


// 1)WriteaC++programtoprintthefollowingpattern.
// A
// B C
// D E F
// G H I J


#include <iostream>

using namespace std;

int main() {
    int n, count = 1;

    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << char(count + 64) << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}



// 2)Write a C++ program to print the followingpattern
// *
// * *
// * * *
// * * * *

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


// 3)Writea C++program to calculate following series: 
// (1*1)+(2*2)+(3*3)+ … +(n*n)


#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    cout << "The sum of the series is " << sum << endl;
    return 0;
}


// 4)Write a C++ program to convert decimal number into binary number

#include <iostream>
using namespace std;

int main() {
    int decimal, remainder, binary = 0, base = 1;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    cout << "The binary equivalent is " << binary << endl;
    return 0;
}
