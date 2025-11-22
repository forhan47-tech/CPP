#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(50);  // Allocates memory for an int
    cout << "Dynamic Value: " << *ptr << endl;  
    delete ptr;  // Frees allocated memory
    return 0;
}

