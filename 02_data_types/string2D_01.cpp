#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruits[3] = {"Apple", "Banana", "Cherry"};

    for (int i = 0; i < 3; ++i)
        cout << fruits[i] << " ";
    cout << endl;

    return 0;
}
