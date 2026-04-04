#include <iostream>
using namespace std;

int mcCarthy91(int n) {
    if (n > 100) return n - 10;              
    return mcCarthy91(mcCarthy91(n + 11)); // recursive call with modified argument
}

int main() {
    cout << mcCarthy91(50) << endl; 
    cout << mcCarthy91(200) << endl; 
}
