#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void show() { 
        cout << first << " , " << second << endl; 
    }
};

int main() {
    Pair<int, double> p1(10, 3.14);
    Pair<string, int> p2("Age", 25);
    
    p1.show();
    p2.show();
}
