#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c = 'F';
    if (isxdigit(c)) cout << c << " is a hex digit\n";
    return 0;
}
