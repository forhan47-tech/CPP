#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Contiguous";
    string t(s.begin(), s.begin()+4); 
    cout << t << endl; 
}
