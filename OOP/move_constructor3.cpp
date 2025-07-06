#include <iostream>
using namespace std;

class Book {
public:
    string title;

    // Constructor
    Book(string t) : title(t) {}

    // Move constructor
    Book(Book &&b) noexcept : title(move(b.title)) {
        cout << "Move constructor called!" << endl;
    }

    // Delete copy constructor
    Book(const Book &b) = delete;

    // Delete copy assignment operator
    Book& operator=(const Book &b) = delete;

    // Display function
    void show() const {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b1("OOP Essentials");

    // Valid move
    Book b2 = move(b1);

    b1.show();
    b2.show();

    // Invalid: would cause compile-time error
    // Book b3 = b2;             // ❌ Copy constructor is deleted
    // Book b4("Another");
    // b4 = b2;                  // ❌ Copy assignment is deleted

    return 0;
}
