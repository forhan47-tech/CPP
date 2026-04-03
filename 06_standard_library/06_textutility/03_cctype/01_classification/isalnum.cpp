#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c = 'A';
    if (isalnum(c)) cout << c << " is alphanumeric\n";
    return 0;
}
