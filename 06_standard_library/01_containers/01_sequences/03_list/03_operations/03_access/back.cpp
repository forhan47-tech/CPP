#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};
    cout << "Back element: " << l.back() << endl;

    l.back() = 77; // modify
    cout << "Modified back: " << l.back() << endl; 
}
