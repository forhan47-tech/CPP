#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    if (grade == 'A') {
        cout << "Excellent" << endl;
    } else if (grade == 'B') {
        cout << "Good" << endl;
    } else if (grade == 'C') {
        cout << "Average" << endl;
    } else {
        cout << "Needs Improvement" << endl;
    }

    return 0;
}
