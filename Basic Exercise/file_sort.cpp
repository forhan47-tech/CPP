#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream file("input.txt");
    ofstream temp("sorted.txt");
    vector<string> lines;
    string line;

    if (!file || !temp) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read lines into vector
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    // Sort lines alphabetically
    sort(lines.begin(), lines.end());

    // Write sorted lines to file
    for (const auto &l : lines) {
        temp << l << endl;
    }
    temp.close();

    cout << "Lines sorted successfully in sorted.txt." << endl;
    return 0;
}
