#include <iostream>
using namespace std;

int main() {
    int score = 75;
    string result = (score >= 90) ? "Excellent" :
                    (score >= 60) ? "Pass" : "Fail";

    cout << "Result: " << result << endl;
    return 0;
}
