#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Does key 2 exist? " << (m.count(2) ? "Yes" : "No") << endl;
    
    cout << "Does key 2 exist? " << (m.find(2) != m.end() ? "Yes" : "No") << endl;  // Output: Yes

    cout << "Does key 2 exist? " << (m.contains(2) ? "Yes" : "No") << endl;  // Output: Yes
    
    return 0;
}
