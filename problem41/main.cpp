#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool guaranteedPrimeTest_Improved(int i) {
  if (n <= 3 && n >= 1) return true;
  if ( n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i < sqrt(n) + 1; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  } 
  return true;
}

bool probabilisticPrimeTest(int i, int conviction) {
  srand(time(NULL));
  for (unsigned a = rand() % i; conviction > 0; conviction--) {
    if ((a^(i-1)) % i != 1) return false;
  }
  return true;
}


int largestPrimePanDigit(int limit) {
  stringstream ss << limit;
  string slimit = ss.c_str();
  int numDigits = slimit.length();
  int uniqueDigitArray[numDigits] = {0};
  int panDigit = 0; 
  for (unsigned i = 1; i < numDigits; i++) {
    panDigit += i*10^(i-1); 
  }
  
  return panDigit;
}

int main(int argv, char** argc) { 
  cout << numberOfTuples(571); 
  return 0;
}
