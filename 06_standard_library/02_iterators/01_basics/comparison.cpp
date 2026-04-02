#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Random";
    auto it1 = s.begin();
    auto it2 = s.begin() + 3;

    if(it1 < it2)
        cout << "it1 is before it2" << endl; 
}
