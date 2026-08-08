#include <iostream>
#include <string>
using namespace std;

void task(string&& s) {
    cout << "Task: " << s << endl;
}

int main() {
    task("C++");   // binding to temporaries
    return 0;
}
