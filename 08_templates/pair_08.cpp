#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1(1, "Apple"), p2(1, "Apple"), p3(2, "Banana");

    cout << boolalpha;  
    cout << "p1 == p2: " << (p1 == p2) << endl;  
    cout << "p1 != p3: " << (p1 != p3) << endl;  
    cout << "p1 < p3: " << (p1 < p3) << endl;    
    cout << "p1 > p3: " << (p1 > p3) << endl;   

    return 0;
}

