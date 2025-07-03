#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string data = "10 20 30 40 50";
    istringstream iss(data);

    int num;
    while (iss >> num) { // Read each integer from the string
        cout << "Extracted: " << num << endl;
    }

    return 0;
}

