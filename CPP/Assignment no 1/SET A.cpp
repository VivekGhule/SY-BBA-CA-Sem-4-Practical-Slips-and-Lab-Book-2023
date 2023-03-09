// SET : A

// 1) Write a C++ program to accept length and width of a rectangle. Calculate and display 
// perimeter as well as area of a rectangle by using Inline function.


#include <iostream>
using namespace std;

inline void calcPerimeterArea(double length, double width, double& perimeter, double& area) {
    perimeter = 2 * (length + width);
    area = length * width;
}

int main() {
    double length, width, perimeter, area;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    calcPerimeterArea(length, width, perimeter, area);
    cout << "Perimeter of the rectangle = " << perimeter << endl;
    cout << "Area of the rectangle = " << area << endl;
    return 0;
}


// 2) Write a C++ program to display first ‘n’ numbers of Fibonacciseries.

#include <iostream>

using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    return 0;
}


// 3) Write a C++ program to reverse anumber

#include <iostream>

using namespace std;

int main() {
    int num, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    cout << "Reversed number: " << rev;

    return 0;
}




// 4). Write a C++ program to display Armstrong numbers between two intervals.

#include <iostream>

using namespace std;

int main() {
    int start, end, num, digit, sum;

    cout << "Enter the start of the interval: ";
    cin >> start;

    cout << "Enter the end of the interval: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for(int i = start; i <= end; i++) {
        sum = 0;
        num = i;
        while(num != 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if(sum == i) {
            cout << i << " ";
        }
    }

    return 0;
}


// 5) Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from 
// user and performs the corresponding arithmetic operation and display the result. (Use 
// switch statement)

#include <iostream>

using namespace std;

int main() {
    int num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result;
            }
            else {
                cout << "Error: Division by zero";
            }
            break;

        default:
            cout << "Error: Invalid operator";
            break;
    }

    return 0;
}


