#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int sumOfSquares( int limit) {
  int sum = 0;
  for (unsigned i = 0 ; i < limit; i++) {
    int sum += i^2;
  }
  return sum;
}

int squaredSum( int limit) {
  int sum = 0;
  for (unsigned i = 0 ; i < limit; i++) {
    int sum += i;
  }
  return sum^2;
}

int difference(int limit) {
  return sumOfSquares(limit) - squaredSum(limit);
}

int main(int argv, char** argc) { 
  cout << difference(100);  
  return 0;
}
