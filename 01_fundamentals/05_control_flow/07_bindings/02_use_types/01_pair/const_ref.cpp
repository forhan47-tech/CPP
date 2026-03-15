#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p{1, "Hello"};

    const auto& [id, text] = p; // can't modify
    cout << "Read-only pair: " << id << ", " << text << endl;
}
