#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 3.14);
    Pair<string, char> p2("Grade", 'A');

    p1.display();  // Output: First: 10, Second: 3.14
    p2.display();  // Output: First: Grade, Second: A

    return 0;
}
