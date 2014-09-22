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

bool probabilisticPrimeTest(int i, int conviction) {
  srand(time(NULL));
  for (unsigned a = rand() % i; conviction > 0; conviction--) {
    if ((a^(i-1)) % i != 1) return false;
  }
  return true;
}

int findFirstPrime(int start) {
  for (unsigned i = start i < start*10; i++) {
    if (probilisticPrimeTest(i, 100)) return i; 
  }
  return 0;
}

int numOfSquareFree(int limit) {
  int count = 0;
  int sentinel = 0;
  for (unsigned i = 0; i < limit; i++) {
    for (unsigned j = 0; j < i; i++) {
      if (guaranteedPrimeTest_Improved(j)) {
        int sqrtPrime = sqrt(j);
        if (!(i %  sqrtPrime)) {
          sentinel = 0;
          break;
        }
      }
    }
    if (sentinel) count++;
    sentinel = 1;
  } 

  return count;
}


int main(int argv, char** argc) { 
  return 0;
}
