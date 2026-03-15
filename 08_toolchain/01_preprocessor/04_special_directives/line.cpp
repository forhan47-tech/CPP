
#include <iostream>
using namespace std;

int main() {
    cout << "Original line: " << __LINE__ << " in file " << __FILE__ << endl;

    #line 200 "fakefile.cpp"
    cout << "After: " << __LINE__ << " in file " << __FILE__ << endl;
}
