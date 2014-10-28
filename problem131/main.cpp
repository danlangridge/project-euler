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

bool uniqueExists(int prime, int limit) {
  for (unsigned i = 0; i < limit; i++) {
    float cubeRoot = cbrt(1.0*i^2+i^3*p);
    if (modf(cubeRoot) == 0) return true;
  }
  return false;
} 


int sumUniques(int primeLimit, int uniqueLimit) {
  int sum = 0;
  for (unsigned i = 0; i < primeLimit; i++) {
    if  (guaranteedPrimeTest_Improoved(i) && uniqueExists(i,uniqueLimit)) {
      sum += i;
    }
  }
  return i;
} 



int main(int argv, char** argc) { 
  cout << sumUniques(1000000,100);
  return 0;
}
