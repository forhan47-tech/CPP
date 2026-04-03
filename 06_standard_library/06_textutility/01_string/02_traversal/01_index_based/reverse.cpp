#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Reverse";

    cout << "Reverse traversal: ";
    for(int i = s.size() - 1; i >= 0; --i) {
        cout << s[i] << " ";  
    }
    cout << endl;
}
