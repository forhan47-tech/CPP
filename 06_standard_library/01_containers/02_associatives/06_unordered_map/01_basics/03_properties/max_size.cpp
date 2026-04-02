#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um;
    cout << "Max size: " << um.max_size() << endl;
}
