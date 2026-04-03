#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p(6, "Six");

    auto [num, word] = p; // structured binding
    cout << num << " - " << word << endl;
    
    num = 10; // modify
    word = "Ten"; 
    cout << num << " - " << word << endl; 
}
