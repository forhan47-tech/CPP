#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;

    ss << "C++ " << "is " << "powerful!";
    string result = ss.str();
    
    cout << result << endl;  // Outputs: C++ is powerful!
    return 0;
}

