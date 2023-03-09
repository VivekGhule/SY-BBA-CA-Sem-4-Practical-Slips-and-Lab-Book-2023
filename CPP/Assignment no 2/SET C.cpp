// SET C

// 1) Create a C++ program to maintain inventory of a book having details Title, Authors[],
// Price, Publisher and Stock. Book can be sold, if stock is available, otherwise purchase will be
// made. Write a menu driven program to perform followingoperation:
// • Accept bookdetails.
// • Salea book. (Sale contains number of copies to besold.)
// • Purchaseabook. (Purchasecontainsnumberofcopiestobepurchased)
// (Use dynamic memory allocation while accepting authordetails).


#include <iostream>
#include <cstring>

    using namespace std;

struct Author
{
    char *name;
};

struct Book
{
    char *title;
    Author *authors;
    float price;
    char *publisher;
    int stock;
};

void acceptBookDetails(Book &book);
void displayBookDetails(Book book);
void sellBook(Book &book, int copies);
void purchaseBook(Book &book, int copies);

int main()
{
    Book book;
    int choice, copies;

    do
    {
        cout << "1. Accept book details" << endl;
        cout << "2. Sell a book" << endl;
        cout << "3. Purchase a book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            acceptBookDetails(book);
            break;
        case 2:
            cout << "Enter number of copies to sell: ";
            cin >> copies;
            sellBook(book, copies);
            break;
        case 3:
            cout << "Enter number of copies to purchase: ";
            cin >> copies;
            purchaseBook(book, copies);
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }

        if (choice != 4)
        {
            displayBookDetails(book);
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}

void acceptBookDetails(Book &book)
{
    char buffer[100];
    int numAuthors;

    cout << "Enter book title: ";
    cin.ignore();
    cin.getline(buffer, 100);
    book.title = new char[strlen(buffer) + 1];
    strcpy(book.title, buffer);

    cout << "Enter number of authors: ";
    cin >> numAuthors;

    book.authors = new Author[numAuthors];

    for (int i = 0; i < numAuthors; i++)
    {
        cout << "Enter name of author " << i + 1 << ": ";
        cin.ignore();
        cin.getline(buffer, 100);
        book.authors[i].name = new char[strlen(buffer) + 1];
        strcpy(book.authors[i].name, buffer);
    }

    cout << "Enter book price: ";
    cin >> book.price;

    cout << "Enter book publisher: ";
    cin.ignore();
    cin.getline(buffer, 100);
    book.publisher = new char[strlen(buffer) + 1];
    strcpy(book.publisher, buffer);

    cout << "Enter initial stock: ";
    cin >> book.stock;
}

void displayBookDetails(Book book)
{
    cout << "Book title: " << book.title << endl;
    cout << "Authors: ";

    for (int i = 0; i < sizeof(book.authors) / sizeof(book.authors[0]); i++)
    {
        cout << book.authors[i].name;

        if (i < sizeof(book.authors) / sizeof(book.authors[0]) - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;
    cout << "Price: $" << book.price << endl;
    cout << "Publisher: " << book.publisher << endl;
    cout << "Stock: " << book.stock << endl;
}

void sellBook(Book &book, int copies)
{
    if (copies > book.stock)
    {
        cout << "Error: Not enough stock available." << endl;
    }
    else
    {
        void sellBook(Book & book, int copies);
        {
            if (copies > book.stock)
            {
                cout << "Error: Not enough stock available." << endl;
            }
            else
            {
                book.stock -= copies;
                cout << "Sold " << copies << " copies of " << book.title << "." << endl;
            }
        }

        void purchaseBook(Book & book, int copies);
        {
            book.stock += copies;
            cout << "Purchased " << copies << " copies of " << book.title << "." << endl;
        } 

    }
     
}



// There are a few issues in the code that need to be resolved: