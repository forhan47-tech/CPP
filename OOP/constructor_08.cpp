#include <iostream>
using namespace std;

class Book {
    string title;

public:
    Book(string t) : title(t) {}

    // Move constructor
    Book(const Book &&b) noexcept : title(move(b.title)) {
        cout << "Move constructor called!" << endl;
    }

    void show() const {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b1("OOP Essentials");

    // Using move semantics explicitly
    Book b2 = move(b1);

    b1.show(); // Might be empty after move
    b2.show(); 
    return 0;
}
