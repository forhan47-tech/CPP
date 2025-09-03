#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("students.txt");

    string name;
    int age, score;

    while (file >> name >> age >> score) {
        cout << "Name: " << name << ", Age: " << age << ", Score: " << score << "\n";
    }

    file.close();
    return 0;
}
