#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p(2, "Two");
    int num;
    string word;

    tie(num, word) = p; // unpack
    cout << num << " , " << word << endl; 

    num = 5; // modify
    word = "Five";
    cout << num << " , " << word << endl;
}
