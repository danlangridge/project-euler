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

vector<int> buildPrimeList(int limit) {
  vector<int> primeList;
  int maxPrime = sqrt(limit);
  for (unsigned i = 1; i < maxPrime; i++) {
    if (guaranteedPrimeTest_Improved(i)) primeList.push_back(i);
  }
  return primeList;
}


int numPrimesSum(int limit) {
  vector<int> primeList = buildPrimeList(limit);
}   


int main(int argv, char** argc) { 
  return 0;
}
