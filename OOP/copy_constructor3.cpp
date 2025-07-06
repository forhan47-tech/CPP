#include <iostream>
using namespace std;

class Book {
public:
    string title;

    // Regular constructor
    Book(string t) : title(t) {}

    // Copy constructor
    Book(const Book &b) : title(b.title) {
        cout << "Copy constructor called!" << endl;
    }

    // Deleted copy assignment operator (still blocks assignment)
    Book& operator=(const Book &b) = delete;

    // Display function
    void show() const {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b1("OOP Essentials");

    // Copy constructor is used
    Book b2 = b1;

    b1.show();
    b2.show();

    return 0;
}
