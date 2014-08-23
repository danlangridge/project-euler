#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

// Fermats Factorization
long largestPrimeFactor(long num) {
  long a = sqrt(num);
  long n_sqrt = a;
  for (long b2 = a*a - num; b2 < n_sqrt; b2 = a*a - num) {
    a = a + 1;
  }
  return a - sqrt(b2);
}

int main(int argv, char** argc) {
 if (argv == 1) {
   cout << largestPrimeNumber(atoi(argc[0]));
 } 
 return 0;
}
