#include <iostream>
using namespace std;

int main() {
    int id;
    char grade;
    double marks;

    cout << "Enter ID, Grade, and Marks: ";
    cin >> id >> grade >> marks; // input separated by spaces

    cout << "ID = " << id << ", Grade = " << grade << ", Marks = " << marks << endl;
    return 0;
}
