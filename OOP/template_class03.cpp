#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;   
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void show() const {
        cout << first << " and " << second << "\n";
    }
};

int main() {
    Pair<int, string> p1(1, "One");
    Pair<string, char> p2("Grade", 'A');

    p1.show(); 
    p2.show();
    return 0;
}
