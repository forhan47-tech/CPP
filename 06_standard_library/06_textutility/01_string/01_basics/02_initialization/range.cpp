#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Contiguous";
    string part(s1.begin(), s1.begin()+4); 
    cout << part << endl; 
}
