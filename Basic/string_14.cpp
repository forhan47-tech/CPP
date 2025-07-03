#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "apple", str2 = "banana";

    if (str1 < str2) 
        cout << "apple comes first!" << endl;

    if (str1.compare(str2) < 0) 
        cout << "Same result using compare()" << endl;

    return 0;
}
