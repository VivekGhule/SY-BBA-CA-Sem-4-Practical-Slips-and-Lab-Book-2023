
// 1) Write a C++ program using class to accept and display ‘n’ Products information, also 
// display information of a product having maximum price. (Use array of objects and 
// dynamic memoryallocation)


#include<iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;
public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Product Price: ";
        cin >> price;
    }
    void display() {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }
    float getPrice() {
        return price;
    }
};

int main() {
    int n;
    float maxPrice = 0.0;
    cout << "Enter the number of products: ";
    cin >> n;
    Product *p = new Product[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter details for Product " << i+1 << endl;
        p[i].accept();
        if(p[i].getPrice() > maxPrice) {
            maxPrice = p[i].getPrice();
        }
    }
    cout << endl << "Details of all Products:" << endl;
    for(int i = 0; i < n; i++) {
        p[i].display();
        cout << endl;
    }
    cout << "Details of Product with Maximum Price:" << endl;
    for(int i = 0; i < n; i++) {
        if(p[i].getPrice() == maxPrice) {
            p[i].display();
            break;
        }
    }
    delete[] p;
    return 0;
}









// 2)Write a C++ program to create a class Distance with data members feet and inches. Write 
// member functions for the following:
// a. To acceptdistance
// b. To displaydistance
// c. To add two distanceobjects
// (Use object as a function argument and function returning object)


#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void set_distance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void get_distance()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
		void add(Distance d1, Distance d2)
		{
			feet = d1.feet + d2.feet;
			inches = d1.inches + d2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	Distance d1, d2, d3;
	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d3.get_distance();
	return 0;
}







// 3) Write a C++ program to create two classes Array1 and Array2 with an integer array as a 
// data member. Write necessary member functions to accept and display array elements of 
// both the classes.Find and display maximum of both the array.(Use Friend function)

#include <iostream>
using namespace std;

class Array2; // forward declaration

class Array1 {
    int arr[5];
public:
    void accept();
    void display();
    friend int findMax(Array1 a1, Array2 a2);
};

class Array2 {
    int arr[5];
public:
    void accept();
    void display();
    friend int findMax(Array1 a1, Array2 a2);
};

void Array1::accept() {
    cout << "Enter 5 elements of array1: ";
    for(int i=0; i<5; i++)
        cin >> arr[i];
}

void Array1::display() {
    cout << "Array1: ";
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Array2::accept() {
    cout << "Enter 5 elements of array2: ";
    for(int i=0; i<5; i++)
        cin >> arr[i];
}

void Array2::display() {
    cout << "Array2: ";
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int findMax(Array1 a1, Array2 a2) {
    int max1 = a1.arr[0];
    int max2 = a2.arr[0];
    for(int i=1; i<5; i++) {
        if(a1.arr[i] > max1)
            max1 = a1.arr[i];
        if(a2.arr[i] > max2)
            max2 = a2.arr[i];
    }
    return max(max1, max2);
}

int main() {
    Array1 a1;
    Array2 a2;
    a1.accept();
    a2.accept();
    a1.display();
    a2.display();
    int max = findMax(a1, a2);
    cout << "Maximum of both arrays: " << max << endl;
    return 0;
}



