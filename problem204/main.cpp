#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

vector<int> primeTable();



bool guaranteedPrimeTest_Improved(int i) {
  if (n <= 3 && n >= 1) return true;
  if ( n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i < sqrt(n) + 1; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  } 
  return true;
}

int findHammingNumber(int type, int limit) {
  int count = 0;
  int sentinel = 0;
  for (unsigned i = type; i < limit; i++) {
    for (unisgned j = type; j < primeTable.size(); i++) {
      if (i % j) { sentinel = 1; break; }
    }
    if (!sentinel) count++;
    sentinel = 0; 
    if (guaranteedPrimeTest_Improved(i)) primeTable.push_back(i);
  }
  return count;
}

int main(int argv, char** argc) {
  cout << findHammingNumber(5,1000000000);
  return 0;
}
