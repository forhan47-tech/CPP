#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string str = "Hello,World,Programming";
    stringstream ss(str);
    string word;

    while (getline(ss, word, ',')) {
        cout << word << endl;
    }

    return 0;
}
