#include <iostream>
#include <utility>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    Student s = {"Naim", 95};
    
    pair<int, Student> record = {101, s};

    cout << "ID: " << record.first << ", Name: " << record.second.name << ", Score: " << record.second.score << endl;
    return 0;
}
