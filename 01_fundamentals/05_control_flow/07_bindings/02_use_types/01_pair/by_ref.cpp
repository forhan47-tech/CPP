#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p{1, "Hello"};

    auto& [id, text] = p; // references
    id = 42;             
    text = "World";      

    cout << "Pair after modification: " << p.first << ", " << p.second << endl;
    cout << "Bindings: " << id << ", " << text << endl;
}
