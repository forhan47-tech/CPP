#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line = "42 John 3.5";
    stringstream ss(line);
    int id;
    string name;
    float score;

    ss >> id >> name >> score;
    cout << "ID: " << id << ", Name: " << name << ", Score: " << score << endl;
    return 0;
}
