#include <iostream>
#include <string>
using namespace std;

void process(string&& s) {
    cout << "Processing: " << s << endl;
}

int main() {
    process("Temporary");   // binding to temporaries
    return 0;
}
