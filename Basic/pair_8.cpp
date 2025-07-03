#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair<int, string> p = {1, "Apple"};

    int id;
    string name;

    tie(id, name) = p;  // Unpack pair into variables

    cout << "ID: " << id << ", Name: " << name << endl;

    return 0;
}
