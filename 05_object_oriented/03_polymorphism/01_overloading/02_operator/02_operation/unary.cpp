#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int c=0): count(c) {}

    Counter operator++() {  // Prefix increment
        ++count;
        return *this;
    }

    Counter operator++(int) {  // Postfix increment
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
