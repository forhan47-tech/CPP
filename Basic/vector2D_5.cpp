#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> v = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    cout << "Element at row 1, column 2: " << v[1][2] << endl;

    v[1][2] = 30;
    cout << "Element at row 1, column 2: " << v[1][2] << endl;


    return 0;
}
