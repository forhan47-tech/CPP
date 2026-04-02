#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"}};

    cout << "Count of key 2: " << um.count(2) << endl; 
    cout << "Count of key 3: " << um.count(3) << endl;
}
