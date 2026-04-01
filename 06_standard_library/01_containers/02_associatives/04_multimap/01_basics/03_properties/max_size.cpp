#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm;
    cout << "Max size: " << mm.max_size() << endl;
}
