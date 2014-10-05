#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int SumValues( int limit, numOfDigits) {
  int sum = 0;
  for (unsigned i = 0; i < limit; i++) {
    sum += i^i;
  }
  int digits = 0;
  for (unsigned i = 0 ; i < numOfDigits; i++) {
    digits = 1*i; 
  }
  return sum & digits; 
}

int main(int argv, char** argc) { 
  
  cout << SumValues (1000, 10);

  return 0;
}
