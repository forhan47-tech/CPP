#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm;
    cout << "Is empty? " << (mm.empty() ? "Yes" : "No") << endl;

    mm.insert({1,"Alice"});
    cout << "Is empty after insert? " << (mm.empty() ? "Yes" : "No") << endl;
}
