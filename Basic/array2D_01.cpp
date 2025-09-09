#include <iostream>
#include <array>
using namespace std;

int main() {
    array<array<int, 3>, 3> mat = {{ // 3x3 fixed-size 2D array
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

   cout << "Matrix 1:\n";
   for (size_t i = 0; i < mat.size(); ++i)
        for (size_t j = 0; j < mat[i].size(); ++j)
            cout << "mat[" << i << "][" << j << "] = " << mat[i][j] << endl;            
    return 0;
}
