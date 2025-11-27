#include <iostream>
using namespace std;

int main() {
    int mtx[2][3] = { {1,2,3}, {4,5,6} };
    int* ptr = &mtx[0][0]; // mtx decays to &mtx[0][0]

    for (int i = 0; i < 6; i++) {
        cout << *(ptr+i) << " "; // linear traversal
    }
    return 0;
}