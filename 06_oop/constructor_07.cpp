#include <iostream>
using namespace std;

class Book {
    string title;

public:
    Book(string t) : title(t) {} 

    // Copy constructor
    Book(const Book &b) : title(b.title) {
        cout << "Copy constructor called!" << endl;
    }

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
