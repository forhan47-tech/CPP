#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;

public:
    Book() : Book("Untitled", 0) {  // Delegate to another constructor
        cout << "Delegating constructor called\n";
    }

    Book(string t, int p) : title(t), pages(p) {}

    void show() {
        cout << title << " has " << pages << " pages\n";
    }
};

int main() {
    Book b1;
    Book b2("DSA Manual", 300);
    b1.show();
    b2.show();
    return 0;
}
