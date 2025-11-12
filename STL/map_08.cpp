#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
    map<int, string> m1 = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};
    map<int, string> m2 = move(m1);  // Move m1 into m2

    cout << "m1 Size After Move: " << m1.size() << endl;  
    cout << "m2 contains " << m2.size() << " elements." << endl; 

    return 0;
}

