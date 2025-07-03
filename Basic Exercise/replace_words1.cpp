#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello world, welcome to the world of programming!";
    string oldWord = "world";
    string newWord = "Earth";

    size_t pos = 0;
    while ((pos = str.find(oldWord, pos)) != string::npos) {
        str.replace(pos, oldWord.length(), newWord);
        pos += newWord.length(); // Move past the replaced word
    }

    cout << "Updated string: " << str << endl;
    return 0;
}
