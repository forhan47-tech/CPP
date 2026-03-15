#include <iostream>
using namespace std;

enum class Mode { 
    Manual, Automatic 
};

void setMode(Mode *m, Mode newMode) { // pointer
    *m = newMode;
}

int main() {
    Mode current = Mode::Manual;
    setMode(&current, Mode::Automatic);
    cout << "Mode updated.\n";
}
