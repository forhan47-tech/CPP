#include <iostream>
#include <tuple>

using namespace std;  // Correct placement of namespace

int main() {
    tuple<int, string, double> t = {1, "Orange", 9.99};

    int id;
    string name;
    double price;

    tie(id, name, price) = t;  // Unpacking tuple into variables

    cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << "\n";
    
    return 0;
}

