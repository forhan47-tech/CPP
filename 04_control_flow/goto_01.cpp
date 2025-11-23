#include <iostream>
using namespace std;

int main() {
  int i = 0;

start: // label
  cout << "i = " << i << endl;
  i++;
  if (i < 3) goto start; // jump back to label

  return 0;
}