#include <iostream>
#include <map>
using namespace std;

void showMap(map<string,int> m) { // copy
    m["Temp"] = 999; // modifies only the copy
    cout << "Inside function size=" << m.size() << endl;
}

int main() {
    map<string,int> ages = { {"Alice",25}, {"Bob",30} };
    showMap(ages);
    cout << "Outside function size=" << ages.size() << endl;
}
