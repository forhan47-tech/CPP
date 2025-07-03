#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "apple banana apple orange apple";
    string target = "apple";
    int count = 0;

    stringstream ss(str); // Convert string into stream
    string word;

    while (ss >> word) { // Extract words manually
        if (word == target) // Compare words
            count++;
    }

    cout << "Word '" << target << "' appears " << count << " times." << endl;
    return 0;
}
