#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
};

int main() {
    Data *d = new Data; // Dynamic allocation

    d->i = 100; 
    cout << "Integer: " << d->i << endl;

    d->f = 9.81; 
    cout << "Float: " << d->f << endl;

    delete d; // Free memory
    return 0;
}
