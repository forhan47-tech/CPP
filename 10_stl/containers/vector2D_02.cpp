#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat2(2, vector<int>(3, 0));

    cout << "Vector :\n";
   for (size_t i = 0; i < mat.size(); ++i)
        for (size_t j = 0; j < mat[i].size(); ++j)
            cout << "mat[" << i << "][" << j << "] = " << mat[i][j] << endl;            
    return 0;
}
