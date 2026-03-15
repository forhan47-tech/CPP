#include <iostream>
using namespace std;

char getGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 75) return 'B';
    else if (score >= 60) return 'C';
    else return 'F';
}

int main() {
    cout << "Grade = " << getGrade(82) << endl; 
}
