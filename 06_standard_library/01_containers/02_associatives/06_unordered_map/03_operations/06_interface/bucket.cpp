#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"},{3,"C"}};
    cout << "Bucket of key 2: " << um.bucket(2) << endl;
}
