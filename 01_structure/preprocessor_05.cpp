#include <iostream>
using namespace std;

#define VALUE 10   // Macro definition

int main() {
#if VALUE > 5
    cout << "VALUE is greater than 5" << endl;
#elif VALUE == 5
    cout << "VALUE equals 5" << endl;
#else
    cout << "VALUE is less than 5" << endl;
#endif
    return 0;
}
