#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int fibonacci(int n) {
  int fibn = 1; 
  int fibn_2 = 2; 
  int tmp = 0;
 
  for (unsigned i = 0; i < n; i++) {
    tmp = fibn_2; 
    fibn_2 = fibn_2 + fibn;
    fibn = tmp; 
  }
  fibn = fib_n2 

  return fibn;
}

int numberOfTuples(int n) {
  int limit = fibonacci(n);
  return numberOfTuples = factorial(limit);
}

int main(int argv, char** argc) { 
  cout << numberOfTuples(571); 
  return 0;
}
