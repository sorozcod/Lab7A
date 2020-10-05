#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int sizeofarray;
  cout << "Enter the size of the array: ";
  cin >> sizeofarray;
  int array[sizeofarray];
  for (int p = 0; p < sizeofarray; p++) {
    array[p] = (p*p);
    cout << "| " << array[p] << " ";
  }


}