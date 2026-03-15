#include <iostream>
using namespace std;

namespace Company::Project {
    void run() {
        cout << "Running project with C++17 syntax...\n";
    }
}

int main() {
    Company::Project::run();
    return 0;
}
