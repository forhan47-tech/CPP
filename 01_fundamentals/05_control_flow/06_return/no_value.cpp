#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!" << endl;
    return; // optional in void functions
}

int main() {
    greet();
    cout << "Back in main." << endl;
    return 0;
}
