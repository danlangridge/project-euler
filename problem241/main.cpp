#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int sumDivisors(int num) {
  int sum = 0;
  for (unsigned i = 0; i <= num/2; i++) {
    if ( num % i == 0) sum += i;
  }
  return sum;
}

int perfectQuotient(int n) {
  return sumDivisors(n)/n;
}

int satisfyStatement(int limit) {
  int sum = 0;
  for (unsigned i = 0; i < limit; i++) {
    if ((perfectQuotient(i) - 1/2 == (int)(perfectQuotient(i) - 1/2)) sum += i;  
  }
  return sum;
}



int main(int argv, char** argc) { 
  cout << sumPerfectNumbers(100000000000000000); 
  return 0;
}
