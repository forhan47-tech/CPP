#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c = 'z';
    if (isalpha(c)) cout << c << " is a letter\n";
    return 0;
}
