#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> lines;
    string temp;

    cout << "Enter multiple lines (type 'exit' to stop):\n";
    while (getline(cin, temp) && temp != "exit") {
        lines.push_back(temp);
    }

    cout << "\nEntered lines:\n";
    for (const auto& line : lines) cout << line << endl;

    return 0;
}

