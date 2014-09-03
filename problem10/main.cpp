#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int nextPrime_naive(int n) {
  bool isPrime = true; 
  for (unsigned i = n; i > -1; i++) {
    for (unsigned j = 0; j < n; j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) return i; 
    isPrime = true; 
  }

  return 0;
}

int sumOfPrimes(int n) {
  int sum = 0; 
  for (int i = 1; ; i = nextPrime(i)) {
    if (i > n) return sum; 
    sum += i; 
  }
  return sum;
}


int main(int argv, char** argc) {
  cout << sumOfPrimes(2000000); 
  return 0;
}
