#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A': cout << "Excellent" << endl; break;
        case 'B': cout << "Good" << endl; break;
        case 'C': cout << "Average" << endl; break;
        default:  cout << "Needs Improvement" << endl;
    }

    return 0;
}
