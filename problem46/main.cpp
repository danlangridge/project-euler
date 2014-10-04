#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool guaranteedPrimeTest_Improved(int i) {
  if (n <= 3 && n >= 1) return true;
  if ( n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i < sqrt(n) + 1; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  } 
  return true;
}

int smallestGoldbachContradiction(int limit) {
  bool goldbachNumber = false;
  for (int i = 2; i < limit; i++) {
    if (guaranteedPrimeTest_Improved(i)) continue;
    for (int j = 2; j < i; j++) {
      if (!guaranteedPrimeTest_Improved(j)) continue;
      for (int k = 1; k < i; k++) {
        if (i == j + 2*k^2) { 
          goldbachNumber = true;
          break;
        }
      }
      if (goldbachNumber) {
        goldbachNumber = false;
        break;
      }
      if (j + 1 == k) return i; 
  } 
}



int main(int argv, char** argc) { 
  cout << smallestGoldbachContradiction(1000);
  return 0;
}
