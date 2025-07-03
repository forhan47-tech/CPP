#include <iostream>

using namespace std; // This allows you to use 'cout' and 'cin' without the 'std::' prefix

int main() {
    int n, num;
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cout << "You entered: " << num << endl;
    }

    return 0;
}

