#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p{1, "Hello"};

    auto [id, text] = p; // copies
    id = 42;             
    text = "World";     

    cout << "Original pair: " << p.first << ", " << p.second << endl;
    cout << "Bindings: " << id << ", " << text << endl;
}
