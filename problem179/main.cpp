#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;


long numberOfEqualDivisors_Naive(long limit) {
  long count = 0;
  long n_divisors = 0;
  long n_divisors_2 = 0;
 
  for (long i = 0; i < limit; i++) {
    for (long j = 0; j < i/2; j++) {
      if (i % j == 0) n_divisors_2++; 
    }
    if (n_divisors == n_divisors_2) count++;
    n_divisors = n_divisors_2;
    n_divisors_2 = 0;
  } 
  
  return count;
}

int main(int argv, char** argc) {
  cout << numberOfEqualDivisors_Naive(2000000); 
  return 0;
}
