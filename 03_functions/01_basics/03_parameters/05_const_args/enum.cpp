#include <iostream>
using namespace std;

enum class Level { Low, Medium, High };

void printLevel(const Level &lvl) { // const reference
    switch(lvl) {
        case Level::Low: cout << "Low\n"; break;
        case Level::Medium: cout << "Medium\n"; break;
        case Level::High: cout << "High\n"; break;
    }
}

int main() {
    Level danger = Level::High;
    printLevel(danger); // safe, efficient
}
