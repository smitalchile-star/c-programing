#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    int itemId;
    string title;

public:
    void getItem()
    {
        cout << "Enter Item ID: ";
        cin >> itemId;

        cout << "Enter Title: ";
        cin >> title;
    }
};

class Book : public LibraryItem
{
private:
    string author;

public:
    void getBook()
    {
        getItem();

        cout << "Enter Author: ";
        cin >> author;
    }

    void displayBook()
    {
        cout << "\n--- Book Details ---";
        cout << "\nItem ID: " << itemId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNo;

public:
    void getMagazine()
    {
        getItem();

        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }

    void displayMagazine()
    {
        cout << "\n--- Magazine Details ---";
        cout << "\nItem ID: " << itemId;
        cout << "\nTitle: " << title;
        cout << "\nIssue Number: " << issueNo;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Enter Book Details\n";
    b.getBook();

    cout << "\nEnter Magazine Details\n";
    m.getMagazine();

    b.displayBook();
    m.displayMagazine();

    return 0;
}
