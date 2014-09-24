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

int largestPseudoDivisor(int prime) {
  int largestDivisor;
  int sqrtPrime = sqrt(prime);
  for (unsigned i = 0; i < sqrtPrime; i++) {
    if (sqrtPrime % i) largestDivisor = i;
  }
  return largestDivisor;
}

void numberOfPrimes(int limit) {
  vector<int> primeTable();  
  for (unsigned i = 0; i < limit; i++) {
    if (guaranteedPrimeTest_Improved(i)) primeTable.push_back(i); 
  }
  for (unsigned i; i < primeTable.size(); i++) {
    cout << largestPseudoDivisor(primeTable[i] % 100000); 
  }
}


int main(int argv, char** argc) { 
  numberOfPrimes(190); 
  return 0;
}
