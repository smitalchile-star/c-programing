
#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
    int bookID;
    string bookName;
    bool issued;

public:
    void acceptDetails()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Name: ";
        cin >> bookName;

        issued = false;
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book was not issued." << endl;
        }
    }

    void displayBook()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Status: "
             << (issued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    LibraryBook b;
    int choice;

    b.acceptDetails();

    do
    {
        cout << "\n1. Issue Book";
        cout << "\n2. Return Book";
        cout << "\n3. Display Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                b.issueBook();
                break;

            case 2:
                b.returnBook();
                break;

            case 3:
                b.displayBook();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
