#include <iostream>
#include <sstream>

using namespace std;

int countWords(const string& str) {
    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    string sentence = "C++ is powerful!";
    cout << "Word count: " << countWords(sentence) << endl;

    return 0;
}
