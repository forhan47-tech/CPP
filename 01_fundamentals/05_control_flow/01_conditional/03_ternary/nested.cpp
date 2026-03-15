#include <iostream>
using namespace std;

int main() {
    int score = 85;
    string grade = (score >= 90) ? "A" :
                   (score >= 75) ? "B" :
                   (score >= 60) ? "C" : "F";

    cout << "Grade: " << grade << endl;
    return 0;
}
