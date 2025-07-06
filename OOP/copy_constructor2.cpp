#include <iostream>
using namespace std;

// Book class with a custom copy constructor
class Book {
public:
    string title;

    // Constructor to initialize title
    Book(string t) {
        title = t;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        cout << "Copy constructor called!" << endl;
    }

    // Function to display book title
    void show() {
        cout << "Title: " << title << endl;
    }
};

int main() {
    // Create first Book object
    Book b1("OOP Essentials");

    // Create second Book object using copy constructor
    Book b2 = b1;

    // Display titles
    b1.show();
    b2.show();

    return 0;
}
