#include <iostream>
#include <utility>  
using namespace std;

int main() {
    string s1 = "Hello, World!";

    string s2 = move(s1); // Using std::move

    cout << "s1 after move: " << s1 << endl;  // Undefined or empty
    cout << "s2 now owns the string: " << s2 << endl;
    return 0;
}