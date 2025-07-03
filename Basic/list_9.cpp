#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 20, 30, 40, 50, 70};  // Direct initialization

    numbers.push_back(60);  // Add element at the end

    numbers.push_front(5);  // Add element at the front

    numbers.pop_back();  // Remove last element

    numbers.pop_front(); // Remove first element

    return 0;
}

