#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << "isCodingFun: " << isCodingFun << endl; 
    cout << "isFishTasty: " << isFishTasty << endl; 

    if (isCodingFun) {
        cout << "Coding is fun!" << endl;
    } 

    if (!isFishTasty) {
        cout << "Fish is not tasty!" << endl;
    }

    if (isCodingFun && !isFishTasty) {
        cout << "I love coding, but not fish!" << endl;
    }
     
    return 0;
}
