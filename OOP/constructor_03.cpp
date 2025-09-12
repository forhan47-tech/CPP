#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;

public:
    Book() : Book("Untitled", 0) {} // Delegating constructor

    void show() const {
        cout << title << " has " << pages << " pages\n";
    }
};

int main() {
    Book b1;
    b1.show();
    return 0;
}
