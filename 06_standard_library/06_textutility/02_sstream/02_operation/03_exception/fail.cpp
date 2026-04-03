#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("abc");
    int num;
    ss >> num; // fails
    cout << "Fail? " << ss.fail() << endl;
}
