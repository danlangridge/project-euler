#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool hasCommonDivisor(int num, int den) {
  for (unsigned i = num; i < den; i++) {
    if ( (num % i == 0) && (den % i == 0)) return false;
  }
  return true;
}

float smallestResilientDivisor(float limit, float bound) {
  int numResilientDivisors = 0;
  for (unsigned i = 1; i < limit; i++) {
    for (unsigned j = 0; j < i; i++) {
      if (!hasCommonDivisor(j,i)) numResilientDivisors++;  
    }
    if ( bound > (float)numResilientDivisors/i) return (float)numResilientDivisors/i;  
    numResilientDivisors = 0; 
  }
  return 0.0;
} 

int main(int argv, char** argc) { 
  cout << smallestResilientDivisor(100000000, 15499.0/94744); 
  return 0;
}
