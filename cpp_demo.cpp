#include <iostream>
using namespace std;

int numbers[4] = {1, 2, 3, 4};

int main () {
  for ( int n=0 ; n<4 ; ++n ) {
    cout << numbers[n] << "\n";
  }
  return 0;
}