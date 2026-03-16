#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream in("example.txt");

    if (!in) {
        cerr << "Error: Could not open input file." << endl;
        return 1;
    }

    vector<string> vec;
    string word;

    while (in >> word) {
        if (word == "old") {
            vec.push_back("new");  // replace
        } else {
            vec.push_back(word);   // keep original
        }
    }
    in.close();

    ofstream out("example.txt");

    if (!out) {
        cerr << "Error: Could not open output file." << endl;
        return 1;
    }

    for (const auto& l : vec) {
        out << l << " ";  // write
    }
    out.close();
}
