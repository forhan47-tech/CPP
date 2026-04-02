#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m;
    cout << "Is empty? " << m.empty() << endl; 

    m[1] = "Hello";
    cout << "Is empty? " << m.empty() << endl; 
}
