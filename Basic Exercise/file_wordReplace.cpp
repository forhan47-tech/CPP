#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("input.txt");
    ofstream temp("temp.txt");

    if (!file || !temp) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string word, replacement;
    cout << "Enter word to replace: ";
    cin >> word;
    cout << "Enter replacement word: ";
    cin >> replacement;

    string line;
    while (getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != string::npos) {
            line.replace(pos, word.length(), replacement);
            pos += replacement.length();
        }
        temp << line << endl;
    }

    file.close();
    temp.close();

    remove("input.txt");
    rename("temp.txt", "input.txt");

    cout << "Word replacement completed." << endl;
    return 0;
}
