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

string primeSequence() {
  int min = 1000;
  int firstPrime = findFirstPrime(1000);
  int currentNumber = 0;
  int difference = 0;
  int currentPrime = firstPrime;
  int nextPrime = 0;
  int difference = 0;
  
  while (currentPrime) {
    for (unsigned i = currentPrime + 1;i < min*10; i++) {
      if (probabilisticPrimeTest(i,100)) {
        nextPrime = i;
        difference = currentPrime - nextPrime; 
        if (probabilisticPrimeTest(nextPrime+difference, 100)) break; 
      } 
    }
    if (probabilisticPrimeTest(nextPrime+difference, 100)) break; 
    currentPrime = nextPrime; 
  }
  stringstream ss << (nextPrime + difference);
  ss << nextPrime; 
  ss << currentPrime;
  return ss; 
}

int main(int argv, char** argc) { 
  return 0;
}
