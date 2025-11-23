#include <iostream>
using namespace std;

int main() {
    int score = 75;

    if (score >= 90) {
        cout << "Excellent" << endl;
    } else if (score >= 60) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    
    return 0;
}
