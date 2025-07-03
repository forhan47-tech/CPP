#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}, {4, "Date"}};

    m[5] = "Apple";  // Insert key-value pair
    cout << "Value of key 5: " << m[5] << endl;

    m[2] = "Orange"; // Modify key-value pair
    cout << "Value of key 2: " << m[2] << endl;

    
    return 0;
}
