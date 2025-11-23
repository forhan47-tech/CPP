#include <iostream>
#include <vector>
using namespace std;

class NumberSet {
private:
    vector<int> numbers;

public:
    NumberSet(const vector<int>& input) : numbers(input) {}

    void print() const {
        for (int n : numbers)
            cout << n << " ";
        cout << endl;
    }
};

int main() {
    vector<int> data = {10, 20, 30, 40, 50};
    
    NumberSet ns(data);
    ns.print(); 

    return 0;
}
