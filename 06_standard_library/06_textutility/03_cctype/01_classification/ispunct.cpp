#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c = '!';
    if (ispunct(c)) cout << c << " is punctuation\n";
    return 0;
}
