#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream temp("Modern C++");
    stringstream ss(std::move(temp));
    cout << ss.str() << endl; 
}
