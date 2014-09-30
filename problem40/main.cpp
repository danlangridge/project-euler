#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int digitOfIrationalFraction(int digit) {
  int value = 0;
  for (unsigned i = 0; value < digit; i++) {
    value += log10(i);
  }
  return value;
}

int main(int argv, char** argc) { 
  cout << digitOfIrationalFraction(1000); 
  return 0;
}
