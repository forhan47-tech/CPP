#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
    array<string, 3> tools = {"Git", "SSH", "Make"};

    for (const auto& tool : tools)
        cout << tool << " ";
    cout << endl;

    return 0;
}
