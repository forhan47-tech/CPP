#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, pair<string, double>> nested = {1, {"Apple", 2.5}};

    cout << "ID: " << nested.first << ", Name: " << nested.second.first 
                    << ", Price: " << nested.second.second << endl;  
    return 0;
}
