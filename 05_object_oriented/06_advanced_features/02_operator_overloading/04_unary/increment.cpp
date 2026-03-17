#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int c=0): count(c) {}

    // Prefix increment
    Counter operator++() {
        ++count;
        return *this;
    }

    // Postfix increment (dummy int parameter)
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() { 
        cout << count << endl; 
    }
};

int main() {
    Counter c(5);
    ++c;        // prefix
    c.display(); 
    c++;        // postfix
    c.display(); 
}
