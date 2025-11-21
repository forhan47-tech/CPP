#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Program name: " << argv[0] << endl;

    if (argc > 1) {
        cout << "First argument: " << argv[1] << endl;
    } else {
        cout << "No extra arguments provided." << endl;
    }

    return 0;
}
