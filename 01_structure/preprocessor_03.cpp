#include <iostream>
using namespace std;

#define TEMP 100
#undef TEMP   // Macro TEMP removed

int main() {
    // TEMP is no longer defined here
    cout << "TEMP undefined!" << endl;
    return 0;
}
