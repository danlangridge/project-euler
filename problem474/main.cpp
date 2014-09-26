#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int numberOfDivisors(int n, int d) {
  int count = 0;
  int numDigits = log10 (d) + 1;
  for (unsigned i = 0; i < n; i++) {
    if (n % i == 0) {
      j = i % 10*numDigits;
      if ( d == j) count++;
    }
  }
  return count;
}

int main(int argv, char** argc) { 
  cout << numberOfDivisors(10^6!,654321); 
  return 0;
}
