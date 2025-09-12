#include <iostream>
using namespace std;

class Item {
    static int nextID;   // Shared across all instances
    int id;             
    string name;    

public:
    Item(string n) : name(n), id(++nextID) {}

    void show() const {
        cout << "Item #" << id << ": " << name << endl;
    }
};

int Item::nextID = 0;

int main() {
    Item a("Pen"), b("Notebook"), c("Eraser");
    
    a.show();  
    b.show(); 
    c.show();  
    return 0;
}
