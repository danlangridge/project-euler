#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

inline bool factorialSum(int number) { 
  int digits = floor(log10(number));
  int sum = 0;
  for (unsigned i = 0; i < digits; i++) {
    sum += (number >> i & 0x01);
  }
  if (sum == number) return true;
  return false;
}

int countFactoralSums(int limit) {
  int count = 0;
  for (unsigned = 0; i < limit; i++) {
    if (factoralSum(i)) count++;
  }
  return count = 0;
}

int main(int argv, char** argc) { 
  cou << countFactoralSums(1000);
  return 0;
}
